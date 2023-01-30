#include <iostream>
#include <vector>
using namespace std;

const int N = 110000;
vector<int> primes;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 0; primes[i] * primes[i] <= n; i++) {
        if (n % primes[i] == 0)
            return false;
    }
    return true;
}

void sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
}

int main() {
    sieve(N);
    int count = 0;
    for (int i = 2; count < 10001; i++) {
        if (is_prime(i)) {
            count++;
        }
    }
    cout << primes.back() << endl;
    return 0;
}
