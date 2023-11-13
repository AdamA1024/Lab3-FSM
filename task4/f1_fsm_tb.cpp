#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vf1_fsm.h"
#include "vbuddy.cpp" // include vbuddy code
#include "iostream"
#define MAX_SIM_CYC 100000

int main(int argc, char **argv, char **env)
{
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges
  int lights = 0; // state to toggle LED lights

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vf1_fsm *top = new Vf1_fsm;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC *tfp = new VerilatedVcdC;
  top->trace(tfp, 99);
  tfp->open("delay.vcd");

  // init Vbuddy
  if (vbdOpen() != 1)
    return (-1);
  vbdHeader("L3T4:Delay");
  vbdSetMode(1); // Flag mode set to one-shot

  // initialize simulation inputs
  top->clk = 1;
  top->rst = 1;
  // top->trigger = 0;
  //  top->n = vbdValue();

  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
  {
    // dump variables into VCD file and toggle clock
    for (tick = 0; tick < 2; tick++)
    {
      tfp->dump(2 * simcyc + tick);
      top->clk = !top->clk;
      top->eval();
    }
    top->rst = (simcyc < 1); // assert reset for 1st cycle

    // input trigger to kick of sequence
    top->trigger = 0;
    // Display toggle neopixel
    vbdBar(top->out);
    if (top->initTimer)
    {
      vbdInitWatch();
      while (!vbdFlag())
      {
      }
      int reactionTime = vbdElapsed();
      std::cout << reactionTime << std::endl;
      top->trigger = 1;
    }

    vbdCycle(simcyc);
    if (Verilated::gotFinish())
      exit(0);
  }

  vbdClose(); // ++++
  tfp->close();
  exit(0);
}
