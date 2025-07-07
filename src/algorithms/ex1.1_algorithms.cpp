#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include "ex1.1_algorithms.hpp"

// Algorithm 6

void algorithm_6(std::vector<int> &v) {
    if (v.size() > 1) {
        int pivot = v[0];
        int frontier_idx = 1;
        int temp;
        for (int i = 1; i < v.size(); i++) {
            if (v[i] < pivot) {
                temp = v[i];
                v[i] = v[frontier_idx];
                v[frontier_idx] = temp;
                frontier_idx++;
            }
        }
        std::vector<int> low_vect(v.begin() + 1, v.begin() + frontier_idx);
        algorithm_6(low_vect);
        std::vector<int> high_vect(v.begin() + frontier_idx, v.end());
        algorithm_6(high_vect);
        
        std::copy(low_vect.begin(), low_vect.end(), v.begin());
        std::copy(high_vect.begin(), high_vect.end(), &v[frontier_idx]);
        v[frontier_idx - 1] = pivot;
    }
}

// Algorithm 7

int algorithm_7(std::vector<int> &v, int target) {
    int first = 0;
    int mid = v.size() / 2;
    int last = v.size() - 1;
    while ((first <= last)) {
        if (v[mid] == target) {
            return mid;
        }
        else if (v[mid] < target ) {
            first = mid + 1;
        }
        else {
            last = mid - 1;
        }
        mid = first + (last - first) / 2;
    }
    return -1;
}

// Algorithm 8

std::vector<std::vector<int>> algorithm_8(
    const std::vector<std::vector<int>> a, 
    const std::vector<std::vector<int>> b) {
    int m = a.size();
    int k = a[0].size();
    int n = b[0].size();
    std::vector<std::vector<int>> c(m, std::vector<int>(n));
    for (int row_a = 0; row_a < m; row_a++) {
        for (int col_b = 0; col_b < n; col_b++) {
            c[row_a][col_b] = 0;
            for (int idx = 0; idx < k; idx++) {
                c[row_a][col_b] += a[row_a][idx] * b[idx][col_b];
            }
        }
    }
    return c;
}

// Algorithm 9

std::vector<float> algorithm_9(std::vector<int> &v) {
    int sum = 0;
    for (int &element : v) {
        sum += element;
    }
    float mean = static_cast<float>(sum) / v.size();
    
    float mean_diff_sum = 0;
    for (int &element : v) {
        float diff = static_cast<float>(element) - mean;
        mean_diff_sum += diff * diff;
    }
    float std = std::sqrt((1. / v.size()) * mean_diff_sum);
    
    std::vector<float> v_norm(v.size());
    std::transform(v.begin(), v.end(), v_norm.begin(), [](int x) { return static_cast<float>(x); });
    for (float &element : v_norm) {
        element = (element - mean) / std;
    }
    
    return v_norm;
}

// Algorithm 10

std::vector<std::vector<int>> algorithm_10(std::vector<int> &u, std::vector<int> &v) {
    std::vector<std::vector<int>> m(u.size(), std::vector<int>(v.size()));
    for (int i = 0; i < u.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            m[i][j] = u[i] * v[j];
        }
    }
    return m;
}