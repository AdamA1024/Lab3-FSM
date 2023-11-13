module lfsr (
    input logic     clk, //input clock
    input logic     rst, //reset
    input logic     en, //enable 
    output logic  [6:0]  data_out //pseudo-random output        
);

    logic [7:1] sreg; //shift register    
    always_ff @ (posedge clk, posedge rst)
    
            if(rst)
                sreg<=7'b0000001;
            else if (en)
                sreg <= {sreg[6:1], sreg[7]^sreg[3]};
    assign data_out = sreg;

endmodule 
