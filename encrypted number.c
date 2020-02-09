#include<stdio.h>
#include<string.h>
int main()
{
    char num[5];
    gets(num);
    for(int i = 0;i < 4;i++)
    {   if(num[i]!='0')
            num[i] = num[i]+9-10;
        else
            num[i] = '9';
    }
    char t;
    t = num[0];
    num[0] = num[2];
    num[2] = t;
    t = num[1];
    num[1] = num[3];
    num[3] = t;
    printf("The encrypted number is %s",num);
}
