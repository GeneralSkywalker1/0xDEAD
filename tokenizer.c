#include<stdio.h>
#include<string.h>
int main()
{
    char cal[41];
    gets(cal);
    for(int i = 0;i < strlen(cal);)
    {
        if(cal[i]>='0'&&cal[i]<='9')
        {
            while((cal[i]>='0'&&cal[i]<='9')||cal[i]=='.')
            {
                printf("%c",cal[i]);
                i++;
            }
            printf("\n");
        }
        else if(cal[i]!='-'&&cal[i]!='+')
        {
            printf("%c",cal[i]);
            printf("\n");
            i++;
        }
        else
        {
            if(cal[i+1]>='9'||cal[i+1]<='0')
            {
                 printf("%c",cal[i]);
                 printf("\n");
                 i++;
            }
            else
            {
                if(cal[i-1]=='('||i==0)
                {
                    printf("%c",cal[i]);
                    i++;
                }
                else
                {
                    printf("%c",cal[i]);
                    printf("\n");
                    i++;
                }
            }
        }
    }
}
