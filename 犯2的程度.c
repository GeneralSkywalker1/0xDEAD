#include<stdio.h>
#include<string.h>
int main()
{
    char num[52];
    gets(num);
    double rate = 0;
    int cnt = 0;
    for(int i = 0;i < strlen(num);i++)
    {
        if(num[i]=='2')
        {
            cnt++;
        }
    }
    int len = strlen(num);
    if(num[0]=='-')
        len--;
    rate = 1.0*cnt/len;
    if(num[0]=='-')
        rate*=1.5;
    if((num[strlen(num)-1]-'0')%2==0)
        rate*=2;
    int sum = (int)(rate*100000);
    if(sum%10>=5)
        sum+=10;
    sum/=10;
    printf("%d.%02d%c",sum/100,sum%100,'%');
}
