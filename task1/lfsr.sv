module lfsr (
    input logic     clk, //input clock
    input logic     rst, //reset
    input logic     en, //enable 
    output logic  [3:0]  data_out //pseudo-random output        
);

    logic [4:1] sreg; //shift register
    always_ff @ (posedge clk, posedge rst)
        if(en)
            if(rst)
                sreg<=4'b0001;
            else  
                sreg <= {sreg[3:1], sreg[4]^sreg[3]};
    assign data_out = sreg;

endmodule 
