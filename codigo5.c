#include <stdio.h>

float calcBmi(float h, float w);

int main() {
    int num_personas;
    int bajo_peso = 0, peso_normal = 0, sobrepeso = 0, obesidad = 0;

    printf("Ingrese el número de personas: ");
    scanf("%d", &num_personas);

    float altura[num_personas];
    float peso[num_personas];
    float bmi[num_personas];

    for (int i = 0; i < num_personas; i++) {
        printf("\nPersona %d\n", i + 1);
        printf("Ingrese su altura en cm: ");
        scanf("%f", &altura[i]);

        printf("Ingrese su peso en kg: ");
        scanf("%f", &peso[i]);

        bmi[i] = calcBmi(altura[i], peso[i]);

        if (bmi[i] < 18.5) {
            bajo_peso++;
        } else if (bmi[i] >= 18.5 && bmi[i] <= 24.9) {
            peso_normal++;
        } else if (bmi[i] >= 25.0 && bmi[i] <= 29.9) {
            sobrepeso++;
        } else {
            obesidad++;
        }
    }

    printf("\nResultados del BMI:\n");
    for (int i = 0; i < num_personas; i++) {
        printf("Persona %d: Su índice de masa corporal es %.2f kg/m^2\n", i + 1, bmi[i]);
    }

    printf("\nPorcentajes de personas en cada categoría:\n");
    printf("Bajo peso: %.2f%%\n", (bajo_peso / (float)num_personas) * 100);
    printf("Peso normal: %.2f%%\n", (peso_normal / (float)num_personas) * 100);
    printf("Sobrepeso: %.2f%%\n", (sobrepeso / (float)num_personas) * 100);
    printf("Obesidad: %.2f%%\n", (obesidad / (float)num_personas) * 100);

    return 0;
}

float calcBmi(float h, float w) {
    float bmi;

    bmi = w / ((h / 100.0) * (h / 100.0));
    return bmi;
}