#include "Vf1_fsm.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"
#include "iostream"
int main(int argc, char **argv, char **env)
{
    int i;
    int clk;
    Verilated::commandArgs(argc, argv);
    Vf1_fsm *top = new Vf1_fsm;

    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("f1_fsm.vcd");

    // init Vbuddy
    if (vbdOpen() != 1)
    {
        return (-1);
    }
    vbdHeader("Lab3T2: f1FSM");
    top->clk = 1;
    top->rst = 0;
    vbdSetMode(1);

    for (i = 0; i < 1000000; i++)
    {
        for (clk = 0; clk < 2; clk++)
        {
            tfp->dump(2 * i + clk);
            top->clk = !top->clk;
            top->eval();
        }

        top->en = 1;
        vbdBar(top->out & 0xFF);
        // std::cout << (int)top->out << std::endl;
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