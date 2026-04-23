#include <stdio.h>

void dec(float imc);

int main() {
    float peso, altura, imc;
    printf("Insira o peso: ");
    scanf("%f", &peso);
    printf("Insira a altura: ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    printf("IMC: %.2f\n", imc);
    dec(imc);
    return 0;
}
void dec(float imc) {
    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Normal\n");
    } else if (imc < 30) {
        printf("Sobrepeso\n");
    } else if (imc < 35) {
        printf("Obesidade Grau 1\n");
    } else if (imc < 40) {
        printf("Obesidade Grau 2\n");
    } else {
        printf("Obesidade Grau 3\n");
    }
}