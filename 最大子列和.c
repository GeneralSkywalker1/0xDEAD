#include<stdio.h>
int main()
{
    int k = 0;
    scanf("%d",&k);
    int a[k];
    for(int i = 0;i < k;i++)
    {
        scanf("%d",&a[i]);
    }
    int thismax = 0;
    int max = 0;
    for(int i = 0;i < k;i++)
    {
        thismax+=a[i];
        if(thismax < 0)
            thismax = 0;
        if(thismax > max)
            max = thismax;
    }
    printf("%d",max);
}
