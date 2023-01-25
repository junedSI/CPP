#include <iostream>
using namespace std;
int main() {
    int a = 1, b = 2, c, sum = 0,range;
    cout<<"range:";
    cin>>range;
    while (b <= range) {
        if (b % 2 == 0) {
            sum += b;
        }
        c = a + b;
        a = b;
        b = c;
    }
    cout << "Sum of even-valued terms: " << sum << std::endl;
    return 0;
}