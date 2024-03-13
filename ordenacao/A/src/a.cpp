#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

bool compararDecrescente(int a, int b) {
    return a > b;
}

int main(void) {
    int total;
    cin >> total;
    int *fila = new (nothrow) int[total];
    int idosos = 0, adultos = 0;
    for (int i = 0; i < total; i++) {
        cin >> fila[i];
        if (fila[i] < 60) {
            adultos++;
        } else {
            idosos++;
        }
    }
    int *fila_idosos = new (nothrow) int[idosos];
    int *fila_adultos = new (nothrow) int[adultos];
    int a_index = 0, i_index = 0;

    for (int i = 0; i < total; i++) {
        if (fila[i] < 60 && fila_adultos != nullptr) {
            fila_adultos[a_index] = fila[i];
            a_index++;
        } else if (fila_idosos != nullptr) {
            fila_idosos[i_index] = fila[i];
            i_index++;
        }
    }

    if (fila_idosos != nullptr) {
        sort(fila_idosos, fila_idosos + idosos, compararDecrescente);
        for (int i = 0; i < idosos; i++) {
            cout << fila_idosos[i];
            if (i < idosos) {
                cout << " ";
            }
        }
        cout << endl;
    }

    if (fila_adultos != nullptr) {
        for (int i = 0; i < adultos; i++) {
            cout << fila_adultos[i];
            if (i < adultos) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
