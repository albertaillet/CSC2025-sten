#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>

/* A simple (and inefficient) function to compute the
arithmetic sum from 1 to the value of upper using a for loop.
*/
int arithmetic_sum(int upper) {
    volatile int sum = 0;
    for (int i = 1; i <= upper; i++) {
        sum += i;
    }
    return sum;
}

int non_volatile_arithmetic_sum(int upper) {
    int sum = 0;
    for (int i = 1; i <= upper; i++) {
        sum += i;
    }
    return sum;
}

int smarter_arithmetic_sum(int upper) {
    return (upper * (upper + 1)) / 2;
}

TEST_CASE("Benchmarking Basics") {

    BENCHMARK("volatile arithmetic sum 1 to 100") {
        return arithmetic_sum(100);
    };
    
    BENCHMARK("volatile arithmetic sum 1 to 1000") {
        return arithmetic_sum(1000);
    };

    BENCHMARK("arithmetic sum 1 to 100") {
        return non_volatile_arithmetic_sum(100);
    };
    BENCHMARK("arithmetic sum 1 to 1000") {
        return non_volatile_arithmetic_sum(1000);
    };

    BENCHMARK("smart arithmetic sum 1 to 100") {
        return smarter_arithmetic_sum(100);
    };
    BENCHMARK("smart arithmetic sum 1 to 1000") {
        return smarter_arithmetic_sum(1000);
    };


}