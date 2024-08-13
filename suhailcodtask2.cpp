#include <iostream>

int main() {
    // Variables to store user input
    double num1, num2;
    char operation;
    double result;

    // Displaying menu for the user
    std::cout << "Simple Calculator\n";
    std::cout << "Choose an operation:\n";
    std::cout << " + : Addition\n";
    std::cout << " - : Subtraction\n";
    std::cout << " * : Multiplication\n";
    std::cout << " / : Division\n";
    std::cout << "Enter operation: ";
    std::cin >> operation;

    // Getting input from user
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Performing the chosen operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << "Result: " << result << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid operation selected." << std::endl;
            break;
    }

    return 0;
}