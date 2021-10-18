#include <stdio.h>
#include <string.h>

int main()
{
    int option;
    printf("select\n 1. For sum\n 2. For product ");
    scanf("%d", &option);
    while (1)
    {
        if (option == 1)
        {
            char a[100], b[100];
            printf("Enter Two Unary Numbers\n");
            scanf("%s %s", &a, &b);
            printf("Sum: %s%s\n", a, b);
        }
        else if (option == 2)
        {
            char a[100], b[100];
            printf("Enter Two Unary Numbers\n");
            scanf("%s %s", &a, &b);
            int n = strlen(a);

            printf("Product: \n");
            for (int i = 0; i < n; i++)
            {
                printf("%s", b);
            }
            printf("\n");
        }
        else
        {
            break;
        }
    }
    return 0;
}