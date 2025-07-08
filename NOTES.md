Ex0.0

```
Benchmarking Basics
-------------------------------------------------------------------------------
/eos/user/a/alsundai/Code/CSC2025-sten/src/ex0.0_benchmarking_basics.cpp:23
...............................................................................

benchmark name                       samples       iterations    est run time
                                     mean          low mean      high mean
                                     std dev       low std dev   high std dev
-------------------------------------------------------------------------------
volatile arithmetic sum 1 to 100               500           873     14.841 ms
                                        33.8886 ns    33.6397 ns    34.2422 ns
                                        3.33786 ns    2.62267 ns    4.65008 ns

volatile arithmetic sum 1 to 1000              500            53    15.0785 ms
                                        581.052 ns     570.63 ns    605.038 ns
                                        170.515 ns    68.1981 ns    301.664 ns

Arithmetic sum 1 to 100                        500        105751          0 ns
                                       0.288561 ns     0.2849 ns   0.296445 ns
                                      0.0583924 ns  0.0343954 ns   0.115443 ns

Arithmetic sum 1 to 1000                       500         99971          0 ns
                                       0.284433 ns    0.28218 ns   0.287207 ns
                                      0.0284054 ns  0.0243693 ns  0.0327054 ns


===============================================================================
test cases: 1 | 1 passed
assertions: - none -
```