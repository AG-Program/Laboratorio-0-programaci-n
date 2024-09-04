def calc_bmi(height, weight):
    bmi = weight / ((height / 100.0) ** 2)
    return bmi

def main():
    height = float(input("Enter your height in cms: "))
    weight = float(input("Enter your weight in kgs: "))
    
    # Calcular el IMC
    bmi = calc_bmi(height, weight)
    print(f"Your body mass index is {bmi:.2f} kg/m^2")
    if bmi < 18.5:
        print("You are underweight")
    elif 18.5 <= bmi <= 24.9:
        print("You are normal weight")
    elif 25.0 <= bmi <= 29.9:
        print("You are overweight")
    elif 30.0 <= bmi <= 34.9:
        print("You are in grade 1 obesity")
    elif 35.0 <= bmi <= 39.9:
        print("You are in grade 2 obesity")
    else:
        print("You are in grade 3 obesity")

if __name__ == "__main__":
    main()

