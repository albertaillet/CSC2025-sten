#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <vector>

/*
A simple function to compute the
sum of all elements in a vector.
*/
int vector_sum(std::vector<int> &v) {
    int sum = 0;
    for (int element : v) {
        sum += element;
    }
    return sum;
}

TEST_CASE("Benchmarking Advanced") {

    BENCHMARK_ADVANCED("Vector sum 0 to 10 million")(Catch::Benchmark::Chronometer timer) {
        // Setup code to create and fill a vector for timing vector_sum
        int length = 10000000;
        std::vector<int> vect(length);
        for (int i = 0; i < vect.size(); i++) {
            vect[i] = i;
        }
        // Using the 'timer' object to run and time the code we want to benchmark
        timer.measure([&] {
            return vector_sum(vect);
        });
    };


    BENCHMARK_ADVANCED("Vector sum 0 to 10000")(Catch::Benchmark::Chronometer timer) {
        // Setup code to create and fill a vector for timing vector_sum
        int length = 10000;
        std::vector<int> vect(length);
        for (int i = 0; i < vect.size(); i++) {
            vect[i] = i;
        }
        // Using the 'timer' object to run and time the code we want to benchmark
        timer.measure([&] {
            return vector_sum(vect);
        });
        
    };
      
}