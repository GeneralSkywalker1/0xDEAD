#include<stdio.h>
int main()
{
    int m = 0;
    int n = 0;
    scanf("%d%d",&m,&n);
    int num = 0;
    int cnt = 0;
    int sum = 0;
    for(int i = 0;i<m*n;i++)
    {
        scanf("%d",&num);
        sum+=num;
        cnt++;
        if(cnt%n==0)
        {
            printf("%d\n",sum);
            sum = 0;
        }
    }
}
