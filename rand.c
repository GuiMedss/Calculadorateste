#include <stdio.h>
#include <stdlib.h>

// Prototipos
float soma(float numero1, float numero2);
float sub(float numero1, float numero2);
float d(float numero1, float numero2);
float m(float numero1, float numero2);

int main() {

    float num1 = 0.0;
    float num2 = 0.0;
    float resultado = 0.0;
    int operacao = 0;

    printf("Insira o primeiro numero:\n");
    scanf("%f", &num1);

    printf("Insira o segundo numero:\n");
    scanf("%f", &num2);

    while (operacao != 5) {
        printf("Escolha a operacao\n 1 para soma\n 2 para subtracao\n 3 para divisao\n 4 para multiplicacao\n 5 para sair da calculadora:\n");
        scanf("%d", &operacao);

        switch (operacao) {
            case 1:
                resultado = soma(num1, num2);
                break;
            case 2:
                resultado = sub(num1, num2);
                break;
            case 3:
                resultado = d(num1, num2);
                break;
            case 4:
                resultado = m(num1, num2);
                break;
            case 5:
                printf("Finalizado.");
                return 0;
            default:
                printf("Opcao invalida\n");
                break;
        }

        printf("Resultado da operacao foi: %.2f\n", resultado);
    }

    return 0;
}

// Função soma
float soma(float numero1, float numero2) {
    float result = 0.0;
    result = numero1 + numero2;
    return result;
}

// Função divisao
float d(float numero1, float numero2) {
    float result = 0.0;
    result = numero1 / numero2;
    return result;
}

// Funçao subtracao
float sub(float numero1, float numero2) {
    float result = 0.0;
    result = numero1 - numero2;
    return result;
}

// Função multiplicacao
float m(float numero1, float numero2) {
    float result = 0.0;
    result = numero1 * numero2;
    return result;
}
