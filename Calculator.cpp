#include <iostream>
#include <stdexcept>
#include <cmath>
#include <string>
#include <limits>

// Calculator // This program performs just like a simple calculator, it can perform 
//addition, subtraction, multiplication and division operations on two numbers.

// Function prototypes
double add(double, double);
double subtract(double, double);
double multiply(double, double);
double divide(double, double);

 // Function definitions
    double add(double num1, double num2) {
        return num1 + num2;
    }
    double subtract(double num1, double num2) {
        return num1 - num2;
    }
    double multiply(double num1, double num2) {
        return num1 * num2;
    }
    double divide(double num1, double num2) {
        if (std::abs(num2) < 1e-9) { // Check for division by zero with a small threshold
            throw std::invalid_argument("Denominator cannot be zero");
        }
        return num1 / num2;
    }

    // Main function
    int main() {

        std::cout << "Welcome to the simple calculator!" << std::endl;
        ::std::cout << "Please enter the first number: ";
        double num1;
        std::cin >> num1;
        std::cout << "Please enter the second number: ";
        double num2;
        std::cin >> num2;
        std::cout << "Please enter the operation (+, -, *, /): ";
        char operation;
        std::cin >> operation;
        try {
            double result;
            switch (operation) {
                case '+':
                    result = add(num1, num2);
                    break;
                case '-':
                    result = subtract(num1, num2);
                    break;
                case '*':
                    result = multiply(num1, num2);
                    break;
                case '/':
                    result = divide(num1, num2);
                    break;
                default:
                    throw std::invalid_argument("Invalid operation");
            }
            std::cout << "The result is: " << result << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
        return 0;
    }
    

    


