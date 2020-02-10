#include<stdio.h>
#include<string.h>
int main()
{
    char a;
    int num = 0;
    scanf("%d %c",&num,&a);
    getchar();
    char str[100000];
    gets(str);
    if(num>strlen(str))
     {
        for(int i = 0;i<num-strlen(str);i++)
        {
            printf("%c",a);
        }
        puts(str);
     }
    else
    {
        for(int i = strlen(str)-num;i<strlen(str);i++)
        {
            printf("%c",str[i]);
        }
    }
}
