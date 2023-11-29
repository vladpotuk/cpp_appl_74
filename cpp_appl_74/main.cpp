#include "calculator.h"
#include <iostream>

int main() {
    const int MAX_EXPRESSION_LENGTH = 100;
    char expression[MAX_EXPRESSION_LENGTH];

    std::cout << "Enter an arithmetic expression: ";
    std::cin.getline(expression, MAX_EXPRESSION_LENGTH);

    double result = evaluateExpression(expression);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
