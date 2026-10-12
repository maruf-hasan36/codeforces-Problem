#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch >='a' && ch<='z')
    {
        char upper_case= ch-32;
        printf("%c",upper_case);
    }
    else
    {
        char lowercase= ch +32;
        printf("%c",lowercase);
    }
    return 0;
};