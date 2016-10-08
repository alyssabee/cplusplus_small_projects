// bmi.cpp 
// Calculates BMI (Body Mass Index) using height(inches) and weight(lbs).
//
// Created 10/8/16 by Aly B
#include <iostream>

int main()
{
    double height = 0.0, weight = 0.0, bmi = 0.0;
    std::string bmirange = "";

    std::cout << std::endl << "Please enter your weight in pounds: "; 
    std::cin >> weight; 
    std::cout << std::endl << "Please enter your height in inches: "; 
    std::cin >> height;

    // Convert inches to meters
    height = height * 0.025;
    // Convert lbs to kgs 
    weight = weight * 0.45;
    // Calculate BMI (kgs / m^2) 
    bmi = weight / (height * height);
    // Calculate BMI range
    if (bmi < 18.5) {
        bmirange = "Underweight";
    } else if (bmi >= 18.5 && bmi < 25) {
        bmirange = "Normal weight";
    } else if (bmi >= 25 && bmi < 30) {
        bmirange = "Overweight";
    } else if (bmi > 30) {
        bmirange = "Obese";
    }

    std::cout << std::endl << "Your BMI is: " << bmi 
              << " (" << bmirange << ")" << std::endl;
    return 0; 
    
}
