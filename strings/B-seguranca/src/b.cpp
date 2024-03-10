#include <iostream>

using namespace std;

int main() {
    string senha;
    getline(cin, senha);

    if (senha.length() < 10) {
        cout << "senha invalida" << endl;
        return 0;
    }

    int c_esp = 0;
    int c_mai = 0;
    int c_num = 0;
    for (int i = 0; i < senha.length(); i++) {
        char c = senha[i];
        if (c >= 33 && c <= 39) {
            c_esp++;
        } else if (c >= 65 && c <= 90) {
            c_mai++;
        } else if (c >= 48 && c <= 57) {
            c_num++;
        }
    }
    if (c_esp < 3 || c_mai < 2 || c_num < 3) {
        cout << "senha invalida" << endl;
    } else {
        cout << "senha valida" << endl;
    }
    return 0;
}
