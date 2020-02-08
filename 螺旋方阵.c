#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    int a[n][n];
    int num = 1;
    int i = 0;
    int j = 0;
    int s = n;
    int flag = 0;
    while(1)
    {
        a[i][j] = num;
        if(i==n/2&&j==n/2&&n%2!=0)
            break;
        if(i==n/2&&j==n/2-1&&n%2==0)
            break;
        if(j!=s-1-flag&&i==flag)
                j++;
        else if(i!=s-1-flag&&j==s-1-flag)
            i++;
        else if(i==s-1-flag&&j!=flag)
            j--;
        else if(j==flag&&i!=flag+1)
            i--;
        if(i==flag+1&&j==flag)
            {
                flag++;
            }
        num++;
    }
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
}
