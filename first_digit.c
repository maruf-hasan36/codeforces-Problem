#include<stdio.h>
int main()
{

    int a;
    scanf("%d",&a);
    if (a >=1000 && a<=9999)
    {
        int first_digit = a / 1000;
    if (first_digit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    };
    }
    

    else
    {
        return 0;
    }
};