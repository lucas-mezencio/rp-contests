#include <cmath>
#include <iostream>

using namespace std;

int main(void) {
    int octal;
    int decimal = 0;
    cin >> octal;

    for (int resto, i = 0; octal != 0; i++) {
        resto = octal % 10;
        octal /= 10;
        decimal += resto * pow(8, i);
    }

    cout << decimal << endl;

    return 0;
}