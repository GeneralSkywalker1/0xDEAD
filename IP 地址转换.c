#include<stdio.h>
#include<string.h>
int main()
{
    char str[33];
    gets(str);
    int pow = 128;
    int sum = 0;
    for(int i = 0;i < 32;i++)
    {   if(i%8 == 0&&i!=0)
        {
            printf("%d.",sum);
            sum = 0;
            pow = 128;
        }
        sum+=(str[i]-'0')*pow;
        pow/=2;
        if(i == 31)
        {
            printf("%d",sum);
        }
    }
}
