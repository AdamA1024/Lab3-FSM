#include "Vlfsr.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"
#include "iostream"
int main(int argc, char **argv, char **env)
{
    int i;
    int clk;
    Verilated::commandArgs(argc, argv);
    Vlfsr *top = new Vlfsr;

    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("lfsr.vcd");

    // init Vbuddy
    if (vbdOpen() != 1)
    {
        return (-1);
    }
    vbdHeader("Lab3T1: lfsr");
    top->clk = 1;
    top->rst = 1;
    vbdSetMode(1);

    for (i = 0; i < 1000000; i++)
    {
        for (clk = 0; clk < 2; clk++)
        {
            tfp->dump(2 * i + clk);
            top->clk = !top->clk;
            top->eval();
        }
        std::cout << (int)top->data_out << std::endl;
        // top->en = vbdFlag();
        top->en = 1;
        top->rst = 0;

        vbdHex(1, top->data_out & 0xF);
        vbdBar(top->data_out & 0xFF);
        while (!vbdFlag())
        {
        }
        vbdCycle(i);
        // either simulation finished, or 'q' is pressed
        if ((Verilated::gotFinish()) || (vbdGetkey() == 'q'))
        {
            exit(0);
        }
        // ... exit if finish OR 'q' pressed
    }
}