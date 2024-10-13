#include <stdio.h>
#include <math.h>
#include <unistd.h>

int main (){

    char operator;
    double num1, num2, result;

    printf("Do you want to get the square root of a number? (Y or N): ");
    scanf("%c", &operator);

    if (operator == 'Y' || operator == 'y'){
        printf("Enter the number you want to get the square root of: ");
        scanf("\n%lf", &num1);
        result = sqrt(num1);
        printf("The square root of %.2lf is %lf", num1, result);
        return 0;
    }

    if (operator == 'N' || operator == 'n') {
        printf("Enter the operation you want to do (+, -, /, *, or ^): ");
        scanf("\n%c", &operator);
            if (operator == '+' || operator == '-' || operator == '/' || operator == '*' || operator == '^'){

                printf("Okay so you want that operator, please enter the two numbers");

                sleep(1);
                printf("\nEnter number 1: ");
                scanf("%lf", &num1);

                sleep(1);
                printf("Enter number 2: ");
                scanf("%lf", &num2);

                switch (operator)
                {
                case '+':
                    result = num1 + num2;
                    printf("The answer is: %lf", result);
                    break;

                case '-':
                    result = num1 - num2;
                    printf("The answer is: %lf", result);
                    break;

                case '/':
                    result = num1 / num2;
                    printf("The answer is: %lf", result);
                    break;

                case '*':
                    result = num1 * num2;
                    printf("The answer is: %lf", result);
                    break;

                case '^':
                    result = pow(num1, num2);
                    printf("The answer is: %lf", result);
                    break;
                
                default:
                        printf("Error: Invalid operation. Please try again.\n");
                        break;
                }
        }

        else {
            printf("Error: Invalid operation. Please try again.\n");
        }

    }
    
    else {
        printf("Error: Invalid input. Please enter 'Y' or 'N'.\n");
    }


    return 0;
}