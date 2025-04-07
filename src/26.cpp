#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (n % 2 == 0) {
        for (int i = 1; i <= n / 2; ++i) {
            if (i != n - i) {
                swap(n, i);
                break;
            }
        }
        cout << "The number is even: " << n << endl;
    } else {
        cout << "The number is odd: " << n << endl;
    }

    return 0;
}
