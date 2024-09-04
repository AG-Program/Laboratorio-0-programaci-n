def calc_bmi(height_cm, weight_kg):
    height_m = height_cm / 100.0
    bmi = weight_kg / (height_m * height_m)
    return bmi

def main():
    num_personas = int(input("Ingrese el numero de personas: "))

    alturas = []
    pesos = []
    bmis = []

    for i in range(num_personas):
        print(f"\nPersona {i + 1}")
        altura = float(input("Ingrese su altura en cm: "))
        peso = float(input("Ingrese su peso en kg: "))

        alturas.append(altura)
        pesos.append(peso)

        bmi = calc_bmi(altura, peso)
        bmis.append(bmi)

    print("\nResultados del BMI:")
    for i in range(num_personas):
        print(f"Persona {i + 1}: Su indice de masa corporal es {bmis[i]:.2f} kg/m^2")

if __name__ == "__main__":
    main()
