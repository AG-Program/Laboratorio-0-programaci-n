def calc_bmi(height, weight):
    """
    Calculate BMI given height in cm and weight in kg.
    """
    height_m = height / 100.0  # Convert height to meters
    return weight / (height_m * height_m)

def main():
    # Ask user for height in cms
    height = float(input("Enter your height in cms: "))
    
    # Ask user for weight in kgs
    weight = float(input("Enter your weight in kgs: "))
    
    # Call calc_bmi function
    bmi = calc_bmi(height, weight)
    
    # Print result
    print(f"Your body mass index is {bmi:.2f} kg/m^2")

if __name__ == "__main__":
    main()
