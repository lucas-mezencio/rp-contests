#include <cstdio>
#include <iostream>

using namespace std;

int main(void) {
    float montante;
    cin >> montante;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int diarias;
        float v_ida, v_diaria, v_custos;
        cin >> v_ida >> diarias >> v_diaria >> v_custos;
        float t_viagem = v_ida + (v_diaria * diarias) + v_custos;
        montante -= t_viagem;
    }
    if (montante < 0.0f) {
        printf("deve ");
    } else {
        printf("sobra ");
    }
    printf("%.2f\n", montante);
    return 0;
}