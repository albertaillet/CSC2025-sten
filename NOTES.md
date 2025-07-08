## Ex 0.0

```
Benchmarking Basics
-------------------------------------------------------------------------------
/eos/user/a/alsundai/Code/CSC2025-sten/src/ex0.0_benchmarking_basics.cpp:27
...............................................................................

benchmark name                       samples       iterations    est run time
                                     mean          low mean      high mean
                                     std dev       low std dev   high std dev
-------------------------------------------------------------------------------
volatile arithmetic sum 1 to 100               100           854     2.9036 ms
                                        35.0358 ns    34.1823 ns    36.8788 ns
                                        6.10726 ns     3.4288 ns    11.5136 ns

volatile arithmetic sum 1 to 1000              100            53     3.0157 ms
                                         556.86 ns    551.298 ns    566.148 ns
                                        35.8854 ns    24.1419 ns    49.7682 ns

arithmetic sum 1 to 100                        100        104381          0 ns
                                       0.279506 ns   0.276498 ns   0.284416 ns
                                      0.0192672 ns  0.0129622 ns   0.026151 ns

arithmetic sum 1 to 1000                       100         82737          0 ns
                                       0.286215 ns   0.278851 ns   0.303329 ns
                                      0.0541559 ns   0.024018 ns  0.0977378 ns

smart arithmetic sum 1 to 100                  100        104006          0 ns
                                       0.280832 ns   0.277627 ns   0.286492 ns
                                      0.0210418 ns   0.013598 ns  0.0304651 ns

smart arithmetic sum 1 to 1000                 100        103465          0 ns
                                       0.296731 ns   0.287239 ns   0.311361 ns
                                      0.0593679 ns   0.042762 ns  0.0805918 ns


===============================================================================
test cases: 1 | 1 passed
assertions: - none -
```

## Ex 0.1

```
[alsundai@lxplus9122 CSC2025-sten]$ time ./build/ex0.1
Vector sum: 49999995000000

real    0m0.020s
user    0m0.008s
sys     0m0.006s
[alsundai@lxplus9122 CSC2025-sten]$ time ./build/ex0.1
Vector sum: 49999995000000

real    0m0.016s
user    0m0.007s
sys     0m0.007s
[alsundai@lxplus9122 CSC2025-sten]$ time ./build/ex0.1
Vector sum: 49999995000000

real    0m0.016s
user    0m0.007s
sys     0m0.008s
[alsundai@lxplus9122 CSC2025-sten]$ time ./build/ex0.1
Vector sum: 49999995000000

real    0m0.023s
user    0m0.007s
sys     0m0.013s
[alsundai@lxplus9122 CSC2025-sten]$ time ./build/ex0.1
Vector sum: 49999995000000

real    0m0.018s
user    0m0.008s
sys     0m0.009s
```

## Ex 0.2

```
[alsundai@lxplus916 CSC2025-sten]$ ./build/ex0.2
Randomness seeded to: 1548403933

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
ex0.2 is a Catch2 v3.7.1 host application.
Run with -? for options

-------------------------------------------------------------------------------
Benchmarking Advanced
-------------------------------------------------------------------------------
/eos/user/a/alsundai/Code/CSC2025-sten/src/ex0.2_benchmarking_advanced.cpp:17
...............................................................................

benchmark name                       samples       iterations    est run time
                                     mean          low mean      high mean
                                     std dev       low std dev   high std dev
-------------------------------------------------------------------------------
Vector sum 0 to 10 million                     100             1    188.739 ms
                                        2.30104 ms    2.21208 ms     2.3978 ms
                                        473.001 us    437.499 us    532.135 us

Vector sum 0 to 10000                          100            40      3.104 ms
                                        743.837 ns     727.23 ns    771.178 ns
                                         107.16 ns    73.8066 ns    152.452 ns


===============================================================================
test cases: 1 | 1 passed
assertions: - none -
```

## Ex 1.0

```
-------------------------------------------------------------------------------
Exercise 1.0 - Scaling
-------------------------------------------------------------------------------
/eos/user/a/alsundai/Code/CSC2025-sten/src/ex1.0_scaling.cpp:11
...............................................................................

benchmark name                       samples       iterations    est run time
                                     mean          low mean      high mean
                                     std dev       low std dev   high std dev
-------------------------------------------------------------------------------
Algorithm 1                                    100             4     3.3832 ms
                                        11.1369 us    10.5649 us    13.1759 us
                                        4.91996 us    1.39468 us    11.2518 us

Algorithm 2                                    100          1718     2.9206 ms
                                        17.3401 ns    17.0506 ns    17.8212 ns
                                        1.86611 ns    1.27115 ns     2.5144 ns

Algorithm 3                                    100         10774     2.1548 ms
                                        2.83678 ns    2.80173 ns    2.90835 ns
                                       0.244695 ns   0.141147 ns   0.407555 ns

Algorithm 4                                    100            15     3.1935 ms
                                        2.16205 us    2.12578 us    2.22065 us
                                        230.117 ns    164.226 ns    344.745 ns

Algorithm 5                                    100            28     3.1136 ms
                                        2.09609 us    2.05925 us    2.17332 us
                                        259.918 ns    151.864 ns    504.395 ns


===============================================================================
test cases: 1 | 1 passed
assertions: - none -
```

Looking at the graph I think that:

See graph in plot.ipynb

I think that:
- Algorithm 1 is Bubble sort O(n^2)
- Algorithm 2 is Count instances of value in vector O(n)
- Algorithm 3 is assign value to vector element O(1)
- Algorithm 4 is Radix sort O(n)
- Algorithm 5 is Heap sort O(n log n)

## Ex 1.1

From reading the source code in src/algorithms/ex1.1_algorithms.cpp I think that:

- Algorithm 6 is 
- Algorithm 7 is O(log n) ?
- Algorithm 8 is O(mnk) ?
- Algorithm 9 is 
- Algorithm 10 is

## Ex 2.0
Before changing the program:
```
>> perf stat ./build/ex2.0
Array size: 64 bytes.
Steps taken: 1000000000
Elapsed time: 0.945324 s.
Per step: 0.945324 ns.
Sum: -1089934592

 Performance counter stats for './build/ex2.0':

            868.56 msec task-clock:u                     #    0.900 CPUs utilized
                 0      context-switches:u               #    0.000 /sec
                 0      cpu-migrations:u                 #    0.000 /sec
               129      page-faults:u                    #  148.521 /sec
     2,572,676,729      cycles:u                         #    2.962 GHz
        17,116,763      stalled-cycles-frontend:u        #    0.67% frontend cycles idle
     8,002,292,755      instructions:u                   #    3.11  insn per cycle
                                                  #    0.00  stalled cycles per insn
     1,000,384,055      branches:u                       #    1.152 G/sec
            20,437      branch-misses:u                  #    0.00% of all branches

       0.964836372 seconds time elapsed

       0.775918000 seconds user
       0.066279000 seconds sys
```
For L1 cache:
```
>> perf stat -e L1-dcache-loads,L1-dcache-load-misses ./build/ex2.0
Array size: 64 bytes.
Steps taken: 1000000000
Elapsed time: 0.718647 s.
Per step: 0.718647 ns.
Sum: -1089934592

 Performance counter stats for './build/ex2.0':

     2,001,045,179      L1-dcache-loads:u
            32,398      L1-dcache-load-misses:u          #    0.00% of all L1-dcache accesses

       0.738211415 seconds time elapsed

       0.676856000 seconds user
       0.020041000 seconds sys
```
With 512 bytes size:

```
>> perf stat ./build/ex2.0
Array size: 512 bytes.
Steps taken: 1000000000
Elapsed time: 0.986076 s.
Per step: 0.986076 ns.
Sum: -924509440

 Performance counter stats for './build/ex2.0':

            967.57 msec task-clock:u                     #    0.971 CPUs utilized
                 0      context-switches:u               #    0.000 /sec
                 0      cpu-migrations:u                 #    0.000 /sec
               127      page-faults:u                    #  131.257 /sec
     3,110,035,503      cycles:u                         #    3.214 GHz
       150,561,342      stalled-cycles-frontend:u        #    4.84% frontend cycles idle
     9,002,300,823      instructions:u                   #    2.89  insn per cycle
                                                  #    0.02  stalled cycles per insn
     1,000,385,920      branches:u                       #    1.034 G/sec
            21,841      branch-misses:u                  #    0.00% of all branches

       0.996856161 seconds time elapsed

       0.933279000 seconds user
       0.023664000 seconds sys
```


