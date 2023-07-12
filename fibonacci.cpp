#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int fib = 1, prev = 1;
    for (int i = 3; i <= n; i++) {
        int temp = fib;
        fib += prev;
        prev = temp;
    }

    cout << fib << endl;

    return 0;
}
