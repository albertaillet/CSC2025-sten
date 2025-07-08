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