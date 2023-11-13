module clktick #(
	parameter WIDTH = 16
)(
  // interface signals
  input  logic             clk,      // clock 
  input  logic             rst,      // reset
  input  logic             en,       // enable signal
  output logic  		       tick      // tick output
);

logic [WIDTH-1:0] count;

always_ff @ (posedge clk, posedge rst)
    if (rst) begin
        tick <= 1'b0;
        count <= 32;  
        end
    else if (en) begin
	    if (count == 0) begin
		    tick <= 1'b1;
		    count <= 32;
	        end
	    else begin
		    tick <= 1'b0;
		    count <= count - 1'b1;
	        end
        end
endmodule
