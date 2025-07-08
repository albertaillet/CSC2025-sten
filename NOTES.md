## Ex0.0

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

## Ex0.1

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

## Exercise 0.2

