#include <iostream>

using namespace std;

int main() {
    char divisor_contrato;
    string producao;

    cin >> divisor_contrato;
    cin.ignore(32767, '\n');
    getline(cin, producao);

    int vogais = 0;
    int comprador1 = 0;
    int comprador2 = 0;
    int invalidas = 0;
    for (int i = 0; i < producao.length(); i++) {
        char c = producao[i];
        // cout << "i = " << i << " c = " << c << endl;
        if (c >= 65 && c <= 90) {
            // cout << "invalida " << i << " c = " << c << endl;
            invalidas++;
        } else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            // cout << "vogal " << i << " c = " << c << endl;
            vogais++;
        } else if (c >= 98 && c <= (int)divisor_contrato) {
            // cout << "comprador1 " << i << " c = " << c << endl;
            comprador1++;
        } else if (c > (int)divisor_contrato && c <= 122) {
            // cout << "comprador2 " << i << " c = " << c << endl;
            comprador2++;
        }
        // cout << "--------" << endl;
    }
    cout << "DEFEITUOSOS: " << invalidas << endl;
    cout << "VOGAL SOFT: " << vogais << endl;
    cout << "GEPETO SOFT: " << comprador1 << endl;
    cout << "OCULOS SOFT: " << comprador2 << endl;
    return 0;
}