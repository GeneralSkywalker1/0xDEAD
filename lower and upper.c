#include<stdio.h>
#include<string.h>
int main()
{
    char str[31];
    gets(str);
    str[strlen(str)-1] = '\0';
    for(int i = 0;i < strlen(str);i++)
    {
        if(str[i]>='a'&&str[i]<='z')
            str[i] = str[i] - 32;
        else if(str[i]>='A'&&str[i]<='Z')
            str[i] = str[i] + 32;
    }
    puts(str);
}
