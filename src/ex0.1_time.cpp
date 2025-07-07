#include <vector>
#include <iostream>

/*
A simple function to compute the
sum of all elements in a vector.
*/
long vector_sum(std::vector<int> &v) {
    long sum = 0;
    for (int element : v) {
        sum += element;
    }
    return sum;
}

int main() {
    std::vector<int> vect(10000000);
    for (int i = 0; i < vect.size(); i++) {
        vect[i] = i;
    }

    long sum = vector_sum(vect);

    std::cout << "Vector sum: " << sum << std::endl;

    return 0;
}