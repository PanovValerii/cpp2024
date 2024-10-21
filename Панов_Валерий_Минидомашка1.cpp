#include <iostream>

using namespace std;

int square(int x) {
    return x * x;
}

double trapeze(double a, double b, double h) {
    return (h * (a + b)) / 2.0;
}

int fibbonachi(int N) {
    if (N < 3) {
        return 1;
    }
    else {
        return fibbonachi(int(N - 2)) + fibbonachi(int(N - 1));
    }
}

void cba(int x) {
    while (x != 0) {
        cout << x % 10;
        x /= 10;
    }
}

int main()
{
    int x;
    cin >> x;
    cout << square(x);
    float a;
    float b;
    float h;
    cin >> a;
    cin >> b;
    cin >> h;
    cout << trapeze(a, b, h);
    int N;
    cin >> N;
    for (int i = 1; i < N + 1; i++) {
        cout << fibbonachi(i) << " ";
    }
    int k;
    cin >> k;
    cba(k);
    cin.get();
}
