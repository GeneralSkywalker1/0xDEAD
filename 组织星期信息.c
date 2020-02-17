#include<stdio.h>
#include<string.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    getchar();
    char*str[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    for(int i = 0;i < n;i++)
    {
        char ch[20];
        gets(ch);
        int flag = 0;
        int mark = 0;
        for(int i = 0;i < 7;i++)
        {
            if(strcmp(ch,str[i]) == 0)
            {
                flag = 1;
                mark = i+1;
                break;
            }
        }
        if(flag == 1)
            printf("%d\n",mark);
        else
            printf("-1\n");
    }
}
