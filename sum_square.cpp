#include <iostream>
#include <cmath>
using namespace std;

const int N = 100;

int main() {
    int sum_of_squares = 0;
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum_of_squares += pow(i, 2);
        sum += i;
    }
    int square_of_sum = pow(sum, 2);
    cout << square_of_sum - sum_of_squares << endl;
    return 0;
}
