#include<stdio.h>
#include<string.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    int a[n+1];
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    a[n+1] = -1;
    int num = 0;
    scanf("%d",&num);
    int flag = 0;
    for(int i = 0;i < n;i++)
    {
        if(num>=a[i]&&num<=a[i+1])
        {
            for(int j = n-1;j >= i+1;j--)
            {
                a[j+1] = a[j];
            }
            a[i+1] = num;
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        if(num>a[0])
        {
            for(int i = 0;i < n;i++)
            {
                printf("%d ",a[i]);
            }
            printf("%d ",num);
        }
        else
        {
            printf("%d ",num);
            for(int i = 0;i < n;i++)
            {
                printf("%d ",a[i]);
            }
        }
    }
    else
    {
        for(int i = 0;i < n+1;i++)
        {
            printf("%d ",a[i]);
        }
    }
}
