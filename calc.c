#include <stdio.h>

void menu() {
    puts("Select the desired option number:");
    puts("1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division");
}

int main() {
    int option_number;
    float a;
    float b;

    menu();
    printf("Enter your option number: ");
    scanf("%d", &option_number);
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);


    switch (option_number)
    {
    case 1:
        printf("\n\nResult: %.2f\n", a + b);
        break;
    case 2:
        printf("\n\nResult: %.2f\n", a - b);
        break;
    case 3:
        printf("\n\nResult: %.2f\n", a * b);
        break;
    case 4:
        if (b == 0)
            puts("\nError: division by zero!");
        else
            printf("\n\nResult: %.2f\n", a / b);
        break;
    default:
        puts("\nOperation not available!");
    }

    return 0;
}
