#include <stdio.h>

float calcularIMC(float altura, float peso);
float pesoIdeal(float altura, float imcObjetivo);

int main() {
    float altura;
    float peso;
    float imc;

    printf("Ingrese su altura en centimetros: ");
    scanf("%f", &altura);

    printf("Ingrese su peso en kilogramos: ");
    scanf("%f", &peso);

    imc = calcularIMC(altura, peso);

    printf("Su indice de masa corporal es %f kg/m^2\n", imc);

    if (imc < 18.5) {
        printf("Usted esta bajo de peso\n");
        printf("Su peso ideal deberia estar entre %.2f kg y %.2f kg\n", pesoIdeal(altura, 18.5), pesoIdeal(altura, 24.9));
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Usted tiene un peso normal\n");
    } else if (imc >= 25.0 && imc <= 29.9) {
        printf("Usted tiene sobrepeso\n");
        printf("Su peso ideal deberia estar entre %.2f kg y %.2f kg\n", pesoIdeal(altura, 18.5), pesoIdeal(altura, 24.9));
    } else if (imc >= 30.0 && imc <= 34.9) {
        printf("Usted tiene obesidad grado 1\n");
        printf("Su peso ideal deberia estar entre %.2f kg y %.2f kg\n", pesoIdeal(altura, 18.5), pesoIdeal(altura, 24.9));
    } else if (imc >= 35.0 && imc <= 39.9) {
        printf("Usted tiene obesidad grado 2\n");
        printf("Su peso ideal deberia estar entre %.2f kg y %.2f kg\n", pesoIdeal(altura, 18.5), pesoIdeal(altura, 24.9));
    } else if (imc >= 40.0) {
        printf("Usted tiene obesidad grado 3\n");
        printf("Su peso ideal deberia estar entre %.2f kg y %.2f kg\n", pesoIdeal(altura, 18.5), pesoIdeal(altura, 24.9));
    }

    return 0;
}

float calcularIMC(float altura, float peso) {
    return peso / ((altura / 100.0) * (altura / 100.0));
}

float pesoIdeal(float altura, float imcObjetivo) {
    return imcObjetivo * ((altura / 100.0) * (altura / 100.0));
}