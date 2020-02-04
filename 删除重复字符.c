#include<stdio.h>
#include<string.h>
int main()
{
    char str[81]="\0";
    int cnt[256]={0};
    char old_str[81];
    gets(old_str);
    for(int i = 0,j = 0;i<strlen(old_str);i++)
    {
        if(cnt[(int)old_str[i]]==0)
        {
            str[j]=old_str[i];
            cnt[(int)old_str[i]]++;
            j++;
        }
        str[j]=0;
    }
    for(int j = 0;j<strlen(str)-1;j++)
    {
        for(int i = 0;i<strlen(str)-j-1;i++)
        {
            if(str[i]>str[i+1])
            {
                int t = 0;
                t = str[i];
                str[i] = str[i+1];
                str[i+1] = t;
            }
        }
    }
    puts(str);
}
