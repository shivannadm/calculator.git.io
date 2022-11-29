#include <stdio.h>

int main()
{
    int a, b, result;
    char op;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("enter the operator: * - + /: ");
    scanf("%s", &op);
    printf("enter the number: ");
    scanf("%d", &b);
    switch (op)
    {
    case '+':
        result = a + b;
        printf("The resulta is = %d", result);
        break;

    case '-':
        result = a - b;
        printf("The resulta is = %d", result);
        break;
    case '*':
        result = a * b;
        printf("The resulta is = %d", result);
        break;
    case '/':
        if (b == 0)
        {
            printf("Divisible by zero is not possible");
            break;
        }
        else
        {
            result = a / b;
            printf(" The resulta is = %d", result);
            break;
        }
    default:
        printf("invalid input");

        break;
    }

    return 0;
}