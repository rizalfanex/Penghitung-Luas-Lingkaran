#include <iostream>

using namespace std;

const float PI = 3.14;

int main() {
    float r, luas;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;

    luas = PI * r * r;

    cout << "Luas lingkaran adalah: " << luas << endl;

    return 0;
}

