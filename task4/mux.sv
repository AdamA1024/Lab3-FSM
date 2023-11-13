module mux(
    input logic d0,d1,
    input logic s,
    output logic enabledriver
    );
    assign enabledriver = s? d1:d0;

endmodule
