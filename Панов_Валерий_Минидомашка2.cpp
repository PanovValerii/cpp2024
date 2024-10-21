#include <iostream>

using namespace std;

string oct_hex(int x, int y) {
    string s = " ";
    while (x != 0) {
        if (x % y > 9) {
            char k = x % y + 55;
            s = k + s;
        }
        else {
            char k = x % y + 48;
            s = k + s;
        }
        x /= y;
    }
    return s;
}

int Sirakus(int x) {
    if (x % 2 == 0) {
        x /= 2;
    }
    else {
        x *= 3;
        x++;
        x /= 2;
    }
    return x;
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << oct_hex(x, y);
    int n;
    cin >> n;
    while (n != 1) {
        n = Sirakus(n);
        if (n == 1) {
            cout << "True";
        }
    }
    cin.get();
}

