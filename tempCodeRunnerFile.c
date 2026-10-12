#include<stdio.h>
int main()
{
    int a;
    int b;

    scanf("%d %d",&a,&b);

   long long int sum = a + b;
    long long int mul = a*b;
   long long int sub = a - b;
    printf("%d + %d = %d\n",a,b,sum);
    printf("%d * %d = %d\n",a,b,mul);
    printf("%d - %d = %d\n",a,b,sub);
    return 0;
};