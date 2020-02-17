#include<stdio.h>
#include<string.h>
int main()
{
    char year[5] = "0000";
    char year1[5];
    int num = 0;
    scanf("%s",year1);
    scanf("%d",&num);
    for(int i = strlen(year1) - 1,j = 3;i>=0&&j>=0;i--,j--)
    {
            year[j] = year1[i];
    }
    int age = 0;
    int cnt = 1;
    while(1)
    {
           for(int i = 0;i < 3;i++)
        {
            int flag = 0;
            for(int j = i+1;j < 4;j++)
            {
                if(year[i] == year[j])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                cnt++;
            }
        }
        if(cnt == num)
        {
            printf("%d %s",age,year);
            break;
        }
        else
        {
            age++;
            year[3]++;
            cnt = 1;
            for(int i = 3;i >= 1;i--)
            {
                if(year[i]>'9')
                {
                    year[i] = '0';
                    year[i-1]++;
                }
            }
        }
    }
}
