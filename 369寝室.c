#include<stdio.h>
int check(int a,int b,int c)
{
    if(a%3!=0||b%3!=0||c%3!=0||a==b)
        return 0;
    else
        return 1;
}
int main()
{
    int a[3];
    int sum = 0;
    int cnt = 0;
    for(int i = 0;i < 3;i++)
    {
        scanf("%d",&a[i]);
        a[i] = a[i]%10;
    }
    while(sum!=18||check(a[0],a[2],a[1])==0)
    {
        cnt++;
        sum = 0;
        for(int i =0;i < 3;i++)
        {
            a[i]++;
            if(a[i]==10)
                a[i] = 0;
            sum+=a[i];
        }
        if(cnt>100)
            {
                printf("so sad!");
                break;
            }
    }
    if(cnt<=100)
    {
        printf("%d",cnt);
    }
}
