#include<stdio.h>
#include<string.h>
int main()
{
   int T = 0;
   scanf("%d",&T);
   for(int k = 0;k < T;k++)
   {    int n = 0;
        scanf("%d",&n);
        int a[n][n];
        int flag = 1;
        for(int i = 0;i < n;i++)
        {
            for(int j = 0;j < n;j++)
            {
                scanf("%d",&a[i][j]);
                if(i>j&&a[i][j]!=0)
                {
                    flag = 0;
                }
            }
        }
        if(flag==0)
            printf("NO\n");
        else
            printf("YES\n");
   }
}
