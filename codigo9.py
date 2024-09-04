def calcular_imc(altura, peso):
    return peso / ((altura / 100.0) ** 2)

def peso_ideal(altura, imc_objetivo):
    return imc_objetivo * ((altura / 100.0) ** 2)

def main():
    altura = float(input("Ingrese su altura en centímetros: "))
    peso = float(input("Ingrese su peso en kilogramos: "))

    imc = calcular_imc(altura, peso)

    print(f"Su índice de masa corporal es {imc:.2f} kg/m^2")

    if imc < 18.5:
        print("Usted está bajo de peso")
        print(f"Su peso ideal debería estar entre {peso_ideal(altura, 18.5):.2f} kg y {peso_ideal(altura, 24.9):.2f} kg")
    elif 18.5 <= imc <= 24.9:
        print("Usted tiene un peso normal")
    elif 25.0 <= imc <= 29.9:
        print("Usted tiene sobrepeso")
        print(f"Su peso ideal debería estar entre {peso_ideal(altura, 18.5):.2f} kg y {peso_ideal(altura, 24.9):.2f} kg")
    elif 30.0 <= imc <= 34.9:
        print("Usted tiene obesidad grado 1")
        print(f"Su peso ideal debería estar entre {peso_ideal(altura, 18.5):.2f} kg y {peso_ideal(altura, 24.9):.2f} kg")
    elif 35.0 <= imc <= 39.9:
        print("Usted tiene obesidad grado 2")
        print(f"Su peso ideal debería estar entre {peso_ideal(altura, 18.5):.2f} kg y {peso_ideal(altura, 24.9):.2f} kg")
    else:
        print("Usted tiene obesidad grado 3")
        print(f"Su peso ideal debería estar entre {peso_ideal(altura, 18.5):.2f} kg y {peso_ideal(altura, 24.9):.2f} kg")

if __name__ == "__main__":
    main()
