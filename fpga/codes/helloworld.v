module helloworldfpga(
    input A,
    input B,
    output wire r,
);
    reg r.g;
    always@(A,B)
        begin
            r=(!A&&B) || (!B&&A);
            
    
    end
    endmodule
