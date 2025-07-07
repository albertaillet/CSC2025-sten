#include <vector>
#include "ex1.0_algorithms.hpp"
#include <climits>
#include <algorithm>
#include <cmath>

// Algorithm 1

void algorithm_1(std::vector<int> &v) {
    bool swap = true;
    int temp;
    
    while (swap) {
        swap = false;
        for (int i = 0; i < v.size() - 1; i++) {
            if (v[i] > v[i + 1]) {
                temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
                swap = true;
            }
        }
    }
}

// Algorithm 2

int algorithm_2(std::vector<int> &v, int target) {
    int instances = 0;
    for (int &element : v) {
        if (element == target) {
            instances++;
        }
    }
    return instances;
}

// Algorithm 3

void algorithm_3(std::vector<int> &v, int idx, int value) {
    v[idx] = value;
}

// Algorithm 4

static inline int algorithm_4_helper(int number, int digit) {
    const int shift = digit << 2;
    return (number & (0xF << shift)) >> shift;
}

void algorithm_4_partitioned(std::vector<int> &v) {
    int num_buckets = 0x10;
    std::vector<int> temp(v.size());
    std::vector<int> count(num_buckets, 0);
    int radix;
    int max_radix = 0;
    for (int element : v) {
        count[algorithm_4_helper(element, 0)]++;
        max_radix = element | max_radix;
    }
    for (int i = 1; i < num_buckets; i++) {
        count[i] += count[i - 1];
    }
    for (int i = v.size() - 1; i >= 0; i--) {
        temp[--count[algorithm_4_helper(v[i], 0)]] = v[i];
    }
    v = temp;
    std::fill(count.begin(), count.end(), 0);

    int num_passes = 0;
    while (max_radix) {
        num_passes++;
        max_radix = max_radix >> 4;
    }
    for (int pass_nr = 1; pass_nr < num_passes; pass_nr++) {
        for (int element : v) {
            count[algorithm_4_helper(element, pass_nr)]++;
        }
        for (int i = 1; i < num_buckets; i++) {
            count[i] += count[i - 1];
        }
        for (int i = v.size() - 1; i >= 0; i--) {
            temp[--count[algorithm_4_helper(v[i], pass_nr)]] = v[i];
        }
        v = temp;
        std::fill(count.begin(), count.end(), 0);
    }
}

void algorithm_4(std::vector<int> &v) {
    std::vector<int> v_pos;
    std::vector<int> v_neg;
    for (int element : v) {
        if (element >= 0) {
            v_pos.push_back(element);
        }
        else {
            v_neg.push_back(-element);
        }
    }
    if (v_pos.size() > 0) {
        algorithm_4_partitioned(v_pos);
    }
    if (v_neg.size() > 0) {
        algorithm_4_partitioned(v_neg);
        for (int i = 0; i < v_neg.size(); i++) {
            v[i] = -v_neg[v_neg.size() - i - 1];
        }
    }
    if (v_pos.size() > 0) {
        std::copy(v_pos.begin(), v_pos.end(), v.begin() + v_neg.size());
    }
}

// Algorithm 5

void algorithm_5_ify(std::vector<int> &heap, int idx, int heap_size) {
    int largest_idx = idx;
    int left_idx = 2*idx + 1;
    int right_idx = 2*idx + 2;

    if ((left_idx < heap_size) && (heap[left_idx] > heap[largest_idx])) {
        largest_idx = left_idx;
    }
    if ((right_idx < heap_size) && (heap[right_idx] > heap[largest_idx])) {
        largest_idx = right_idx;
    }
    if (largest_idx != idx) {
        std::swap(heap[idx], heap[largest_idx]);
        algorithm_5_ify(heap, largest_idx, heap_size);
    }
}

void algorithm_5_build(std::vector<int> &v) {
    for (int i = (v.size() / 2) - 1; i >= 0; i--) {
        algorithm_5_ify(v, i, v.size());
    }
}

void algorithm_5_worker(std::vector<int> &v) {
    int heap_size = v.size();
    while (heap_size > 1) {
        std::swap(v[0], v[heap_size - 1]);
        heap_size--;
        algorithm_5_ify(v, 0, heap_size);
    }
}

void algorithm_5(std::vector<int> &v) {
    algorithm_5_build(v);
    algorithm_5_worker(v);
}
