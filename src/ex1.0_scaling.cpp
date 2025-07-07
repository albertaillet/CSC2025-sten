#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>
#include "algorithms/ex1.0_algorithms.hpp"
#include "parameters.hpp"


TEST_CASE("Exercise 1.0 - Scaling") {

    std::cout << "n = " << N << std::endl << std::endl;

#ifdef BENCH1
    BENCHMARK_ADVANCED("Algorithm 1")(Catch::Benchmark::Chronometer timer) {
        
        // Setup code
        std::vector<int> v(N);
        for (int &element : v) {
            element = rand() % 100 - 40;
        }

        // Benchmarking
        timer.measure([&]() {
            std::vector<int> v_copy = v;
            return algorithm_1(v_copy);
        });
        
    };
#endif

#ifdef BENCH2
    BENCHMARK_ADVANCED("Algorithm 2")(Catch::Benchmark::Chronometer timer) {
        
        // Setup code
        std::vector<int> v(N);
        for (int &element : v) {
            element = rand() % 100 - 40;
        }

        // Benchmarking
        timer.measure([&] {
            return algorithm_2(v, 5);
        });
        
    };
#endif

#ifdef BENCH3
    BENCHMARK_ADVANCED("Algorithm 3")(Catch::Benchmark::Chronometer timer) {
        // Setup code
        std::vector<int> v(N);

        // Benchmarking
        timer.measure([&](int i) {
            int idx = i % v.size();
            return algorithm_3(v, idx, i);
        });
    };
#endif

#ifdef BENCH4
    BENCHMARK_ADVANCED("Algorithm 4")(Catch::Benchmark::Chronometer timer) {
        // Setup code
        std::vector<int> v(N);
        for (int &element : v) {
            element = rand() % 10000 - 5000;
        }

        // Benchmarking
        timer.measure([&]() {
            std::vector<int> v_copy = v;
            return algorithm_4(v_copy);
        });
    };
#endif

#ifdef BENCH5
    BENCHMARK_ADVANCED("Algorithm 5")(Catch::Benchmark::Chronometer timer) {
        std::vector<int> v(N);
        for (int &element : v) {
            element = rand() % 10000 - 5000;
        }

        timer.measure([&]() {
            std::vector<int> v_copy = v;
            return algorithm_5(v_copy);
        });
    };
#endif

}