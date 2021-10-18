#include <stdio.h>

int BiProduct(int a, int b)
{
    int i = 0, remainder = 0, sum[20];
    int bp = 0;

    while (a != 0 || b != 0)
    {
        sum[i++] = (a % 10 + b % 10 + remainder) % 2;
        remainder = (a % 10 + b % 10 + remainder) / 2;
        a = a / 10;
        b = b / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;
    while (i >= 0)
        bp = bp * 10 + sum[i--];
    return bp;
}

int main()
{

    long a, b, multiply = 0;

    int i = 0, remainder = 0, sum[20], digit, factor = 1;

    while (1)
    {
        printf("Select the option :\n");
        printf("1.SUM\n2.PRODUCT\n3.Exit\n");
        int option;
        scanf("%d", &option);
        if (option == 1)
        {
            printf("Enter first number: ");
            scanf("%ld", &a);
            printf("Enter second number: ");
            scanf("%ld", &b);
            while (a != 0 || b != 0)
            {
                sum[i++] = (a % 10 + b % 10 + remainder) % 2;
                remainder = (a % 10 + b % 10 + remainder) / 2;
                a = a / 10;
                b = b / 10;
            }
            if (remainder != 0)
                sum[i++] = remainder;
            --i;
            printf("Sum : ");
            while (i >= 0)
                printf("%d", sum[i--]);

            printf("\n");
        }

        else if (option == 2)
        {
            printf("Enter first number: ");
            scanf("%ld", &a);
            printf("Enter second number: ");
            scanf("%ld", &b);
            while (b != 0)
            {
                digit = b % 10;
                if (digit == 1)
                {
                    a = a * factor;
                    multiply = BiProduct(a, multiply);
                }
                else
                    a = a * factor;
                b = b / 10;
                factor = 10;
            }
            printf("Product : %ld", multiply);
            printf("\n");
        }
        else if (option == 3)
        {
            break;
        }
    }

    return 0;
}
