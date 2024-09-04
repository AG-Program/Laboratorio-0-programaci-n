def calc_bmi(height_cm, weight_kg):
    height_m = height_cm / 100.0
    bmi = weight_kg / (height_m * height_m)
    return bmi

def main():
    num_personas = int(input("Ingrese el número de personas: "))
    
    bajo_peso = 0
    peso_normal = 0
    sobrepeso = 0
    obesidad = 0

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

        if bmi < 18.5:
            bajo_peso += 1
        elif 18.5 <= bmi <= 24.9:
            peso_normal += 1
        elif 25.0 <= bmi <= 29.9:
            sobrepeso += 1
        else:
            obesidad += 1

    print("\nResultados del BMI:")
    for i in range(num_personas):
        print(f"Persona {i + 1}: Su índice de masa corporal es {bmis[i]:.2f} kg/m^2")

    print("\nPorcentajes de personas en cada categoría:")
    print(f"Bajo peso: {bajo_peso / num_personas * 100:.2f}%")
    print(f"Peso normal: {peso_normal / num_personas * 100:.2f}%")
    print(f"Sobrepeso: {sobrepeso / num_personas * 100:.2f}%")
    print(f"Obesidad: {obesidad / num_personas * 100:.2f}%")

if __name__ == "__main__":
    main()
