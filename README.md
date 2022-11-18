# ComputerArchitectureLab_1

### Q1
```C
    parser.add_argument("--cpu", type=str, choices=list(cpu_types.keys()),
                        default="atomic",
                        help="CPU model to use")
    parser.add_argument("--cpu-freq", type=str, default="4GHz")
    parser.add_argument("--num-cores", type=int, default=1,
                        help="Number of CPU cores")
    parser.add_argument("--mem-type", default="DDR3_1600_8x8",
                        choices=ObjectList.mem_list.get_names(),
                        help = "type of memory to use")
    parser.add_argument("--mem-channels", type=int, default=2,
                        help = "number of memory channels")
    parser.add_argument("--mem-ranks", type=int, default=None,
                        help = "number of memory ranks per channel")
    parser.add_argument("--mem-size", action="store", type=str,
                        default="2GB",
                        help="Specify the physical memory size")
```

CPU Type : Atomic <br />
CPU Frequency : 4GHz <br />
Num of Cores : 1 <br />
Cash Memory : DDR3_1600_8x8 <br />
RAM Size : 2GB <br />

### Q2b 
sim_seconds : seconds of the simulations <br />
sim_insts : number of instructions simulated <br />
host_inst_rate: The simulator instruction rate <br />

### Q2d
Θα παρατηρούσα πόσα miss έχω στην L1

### Q3
The gem5 has two different CPU models, included in the in-order category of CPUs, the Minor and the Simple CPU.
#### Minor CPU 
Minor is an in-order processor model with a fixed pipeline but configurable data structures and execute behaviour. It is intended to be used to model processors with strict in-order execution behaviour and allows visualisation of an instruction’s position in the pipeline through the MinorTrace/minorview.py format/tool. The intention is to provide a framework for micro-architecturally correlating the model with a particular, chosen processor with similar capabilities.

#### Simple CPU 
The SimpleCPU is a purely functional, in-order model that is suited for cases where a detailed model is not necessary. This can include warm-up periods, client systems that are driving a host, or just testing to make sure a program works. []

### Q3c
An increase in the frequency we may see a decrease in simSeconds and hostSeconds because the total time of the process depends on the frequency that the CPU has. By changing the technology of the cash I also expect to see a decrease in the host time because another type of memory which has lower access time decreases the time that the CPU needs to take the data and store them on the caches.

### REVIEW
Overall, even I did not manage to run the gem5 on my laptop, I learned a lot of new things regarding the computer architecture, such as the basic for the CPUs, cashes and how to learn to search for all these new things. But to say the things how they are I spent much of my time to try and solve other type of problems such as download the linux (with vm, dual boot etc), run all the necessary instructions and eventually stopped by a different obstacle each time. Even from this painfull situation I also learned and practiced other skills, patience for instance...

























### Bibliography 
[gem5.org](https://www.gem5.org/documentation/general_docs/cpu_models/minor_cpu)


