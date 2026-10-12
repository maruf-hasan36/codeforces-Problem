#include<stdio.h>
int main()
{
    int a;
    int b;

    scanf("%d %d",&a,&b);

    int sum = a + b;
    int mul = a*b;
    int sub = a - b;
    printf("%d + %d ",sum);
    return 0;
};