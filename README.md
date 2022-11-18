# ComputerArchitectureLab_1

*  Q1
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
RAM Size : 2GB <br / >

* Q2b
sim_seconds : seconds of the simulations <br />
sim_insts : number of instructions simulated <br />
host_inst_rate: The simulator instruction rate <br />

* Q2d
Θα παρατηρούσα πόσα miss έχω στην L1

* Q3
