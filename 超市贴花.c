#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    int cnt = 0;
    for(int i = 0;i < n;i++)
    {
        int flag1 = 0;
        int flag2 = 0;
        int mark1 = 0;
        int mark2 = 0;
        if(a[i]==-2)
            continue;
        for(int j = 0;j < n;j++)
        {
            if(a[j]==a[i]+1&&flag1==0)
                {
                    flag1 = 1;
                    mark1 = j;
                }
            if(a[j]==a[i]+2&&flag2==0)
                {
                    flag2 = 1;
                    mark2 = j;
                }
            if(flag1 == 1&&flag2 == 1)
                {
                    cnt++;
                    a[mark1] = -2;
                    a[mark2] = -2;
                    a[i] = -2;
                    break;
                }
        }
    }
    printf("%d",cnt);
}
