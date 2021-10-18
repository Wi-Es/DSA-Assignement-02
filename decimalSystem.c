#include <stdio.h>

int main()
{
    int option;
    printf("select\n 1. For sum\n 2. For product ");
    scanf("%d", &option);
    while(1){
    if(option==1){
        int a, b;
        printf("Enter Two Numbers\n");
        scanf("%d %d", &a, &b);
        printf("Sum: %d\n", a + b);
    }
    else if(option==1){
        int a, b;
        printf("Enter Two Numbers\n");
        scanf("%d %d", &a, &b);
        printf("Product: %d\n", a * b);
    }
    else {
        break;
    }
    }
    return 0;
}