#include <iostream>
#include <vector>
using namespace std;

const int N = 20;
vector<int> primes;

bool is_prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
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
    int res = 1;
    for (int i = 0; i < primes.size(); i++) {
        int p = primes[i];
        int k = p;
        while (k * p <= N) {
            k *= p;
        }
        res *= k;
    }
    cout << res << endl;
    return 0;
}
