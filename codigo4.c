#include <stdio.h>

// Prototipo de la función calcBmi
float calcBmi(float h, float w);

int main() {
    int num_personas;

    printf("Ingrese el numero de personas: ");
    scanf("%d", &num_personas);

    float altura[num_personas];
    float peso[num_personas];
    float bmi[num_personas];

       for (int i = 0; i < num_personas; i++) {
        // Pedir al usuario la altura en cm
        printf("\nPersona %d\n", i + 1);
        printf("Ingrese su altura en cm: ");
        scanf("%f", &altura[i]);

        printf("Ingrese su peso en kg: ");
        scanf("%f", &peso[i]);

        bmi[i] = calcBmi(altura[i], peso[i]);
    }

    
    printf("\nResultados del BMI:\n");
    for (int i = 0; i < num_personas; i++) {
        printf("Persona %d: Su indice de masa corporal es %.2f kg/m^2\n", i + 1, bmi[i]);
    }

    return 0;
}

float calcBmi(float h, float w) {
    float bmi;
 
    bmi = w / ((h / 100.0) * (h / 100.0));
    return bmi;
}