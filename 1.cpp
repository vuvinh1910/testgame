#include <iostream>
#include <cmath>
using namespace std;

void phanTichThuaSoNguyenTo(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            int count = 0;
            while (n % i == 0) {
                count++;
                n /= i;
            }
            cout << i << " " << count << endl;
        }
    }
    if (n != 1) {
        cout << n << " " << 1 << endl;
    }
}

int main() {
    int n;
    cin >> n;
    phanTichThuaSoNguyenTo(n);
    return 0;
}
