#include <stdio.h>

float calc_bmi(float height, float weight);

void determine_category(float bmi);

int main() {
    float height;
    float weight;
    float bmi;
    printf("Enter your height in cms: ");
    if (scanf("%f", &height) != 1 || height <= 0) {
        printf("Invalid height input.\n");
        return 1; 

    printf("Enter your weight in kgs: ");
    if (scanf("%f", &weight) != 1 || weight <= 0) {
        printf("Invalid weight input.\n");
        return 1;
    }

    bmi = calc_bmi(height, weight);
    printf("Your body mass index is %.2f kg/m^2\n", bmi);

    determine_category(bmi);

    return 0; 
}

float calc_bmi(float height, float weight) {
    return weight / ((height / 100.0) * (height / 100.0));
}

void determine_category(float bmi) {
    if (bmi < 18.5) {
        printf("You are underweight\n");
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("You are normal weight\n");
    } else if (bmi >= 25.0 && bmi <= 29.9) {
        printf("You are overweight\n");
    } else if (bmi >= 30.0 && bmi <= 34.9) {
        printf("You are in grade 1 obesity\n");
    } else if (bmi >= 35.0 && bmi <= 39.9) {
        printf("You are in grade 2 obesity\n");
    } else {
        printf("You are in grade 3 obesity\n");
    }
}

