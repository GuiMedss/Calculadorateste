#include <stdio.h>
#include <stdlib.h>

// Prototipos
float soma(float numero1, float numero2);
float sub(float numero1, float numero2);
float d(float numero1, float numero2);
float m(float numero1, float numero2);

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

// Função subtracao
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
