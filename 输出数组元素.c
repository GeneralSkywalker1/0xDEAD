#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    int cnt = 0;
    int a[n];
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0;i < n-1;i++)
    {
        printf("%d",a[i+1] - a[i]);
        cnt++;
        if(cnt%3 == 0)
            printf("\n");
        if(cnt%3!=0&&cnt!=n-1)
            printf(" ");
    }
}
