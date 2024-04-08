#include <iostream>
using namespace std;

int powerMod(int a, long long b, int m) {
    int result = 1;
    a = a % m;
    while (b > 0) {
        if (b % 2 == 1)
            result = (result * a) % m;
        b = b / 2;
        a = (a * a) % m;
    }
    return result;
}

int main() {
    long long n;
    cin >> n;
    cout << powerMod(5, n, 100) << endl;

    return 0;
}

