#include <stdio.h>
int main()
{
    float num1, num2, result;
    char op;

    printf("Enter your operation\n");
    scanf("%f %c %f", &num1, &op, &num2);

    switch (op)
    {
    case '-':
        result = num1 - num2;
        printf("Result: %.2f", result);
        break;

    case '+':
        result = num1 + num2;
        printf("Result: %.2f", result);
        break;

    case '*':
        result = num1 * num2;
        printf("Result: %.2f", result);
        break;

    case '/':
        result = num1 / num2;
        printf("Result: %.2f", result);
        break;

    default:
        printf("The operation is not valid");
        break;
    }
    return 0;
}