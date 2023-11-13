module f1_fsm(
    input logic clk, //clock signal
    input logic rst, //reset asynch
    input logic trigger, //initial trigger
    output logic [7:0] out, //lights
    output logic cmd_seq,//control MUX and clock
    output logic cmd_delay,//trigger for delay
    output logic initTimer//start timing reaction
);
    
    logic  mux0; //interconnect wire for delay
    logic  mux1; //interconnect wire for clock
    logic  en; //interconnect wire for f1block


    delay DelayUnit(
        .clk (clk),
        .rst (rst),
        .trigger (cmd_delay),
        .time_out (mux0)
    );

    clktick ClockUnit(
        .clk (clk),
        .rst (rst),
        .en (cmd_seq),
        .tick (mux1)
    );

    mux Mux(
        .d0 (mux0),
        .d1 (mux1),
        .s (cmd_seq),
        .enabledriver (en)
    );

     //define states
    typedef enum  {S0, S1, S2, S3, S4, S5, S6, S7, S8, S9} light_state;
    light_state current_state, next_state;

    always_ff @(posedge clk, posedge rst)
        if(rst)     current_state<=S0;
        else        current_state<=next_state;

    //next state logic
    always_comb 
        case (current_state)
            S0: if(trigger)  next_state=S1;
                else    next_state = current_state;
            S1: if(en)  next_state=S2;
                else    next_state = current_state;
            S2: if(en)  next_state=S3;
                else    next_state = current_state;
            S3: if(en)  next_state=S4;
                else    next_state = current_state;
            S4: if(en)  next_state=S5;
                else    next_state = current_state;
            S5: if(en)  next_state=S6;
                else    next_state = current_state;
            S6: if(en)  next_state=S7;
                else    next_state = current_state;
            S7: if(en)  next_state=S8;
                else    next_state = current_state;
            S8:  next_state=S9;
            S9: if(en)  next_state=S0;
                else    next_state = current_state;
            default: next_state = S0;
        endcase

    //output logic 
    always_comb
        case(current_state)
            S0:
            begin     
                out= 8'b00000000;
                initTimer=1;
                cmd_delay=0;
                cmd_seq=1;
            end
            S1:     
            begin     
                out= 8'b00000001;
                initTimer=0;
                cmd_delay=0;
                cmd_seq=1;
            end
            S2:     
            begin     
                out= 8'b00000011;
                cmd_delay=0;
                cmd_seq=1;
            end
            S3:     
            begin     
                out= 8'b00000111;
                cmd_delay=0;
                cmd_seq=1;
            end
            S4:     
            begin     
                out= 8'b00001111;
                cmd_delay=0;
                cmd_seq=1;
            end
            S5:     
            begin     
                out= 8'b00011111;
                cmd_delay=0;
                cmd_seq=1;
            end
            S6:     
            begin     
                out= 8'b00111111;
                cmd_delay=0;
                cmd_seq=1;
            end
            S7:     
            begin     
                out= 8'b01111111;
                cmd_delay=0;
                cmd_seq=1;
            end
            S8:     
            begin     
                out= 8'b11111111;
                cmd_delay=1;
                cmd_seq=0;
            end   
            S9:     
            begin     
                out= 8'b11111111;
                cmd_delay=0;
                cmd_seq=0;
            end                      
            default:
            begin
                out=8'b00000000;
                cmd_delay=0;
                cmd_seq=1;
            end
        endcase
endmodule
