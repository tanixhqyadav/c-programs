#include <stdio.h>

int main()
{
    int num;
    int product=1;
    printf("Enter any number");
    scanf("%d", &num);
    while(num != 0)
    {
        product = product * (num % 10);
        num = num / 10;
    }

    printf("Product= %d", product);

    return 0;
}

