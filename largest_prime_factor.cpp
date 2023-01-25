#include <iostream>
#include <cmath>

long long FLPF(long long num) {
    long long largestPrimeFactor = 1;
    for (long long i = 2; i <= sqrt(num); i++) {
        while (num % i == 0) {
            largestPrimeFactor = i;
            num /= i;
        }
    }
    if (num > largestPrimeFactor) {
        largestPrimeFactor = num;
    }
    return largestPrimeFactor;
}

int main() {
    long long num = 600851475143;
    std::cout << "Largest prime factor of " << num << ": " << FLPF(num) << std::endl;
    return 0;
}