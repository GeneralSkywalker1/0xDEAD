#include<stdio.h>
int main()
{
    int a[7];
    int mark;
    for(int i = 0;i < 7;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]!=0)
            mark = i;
    }
    int sumscore = 0;
    while(a[0]!=0)
        {
            if(mark==0)
                break;
            sumscore+=mark + 2;
            a[0]--;
        }
    for(int i =0;i < 7;i++)
    {
        sumscore+=a[i]*(i+1);
    }
    printf("%d",sumscore);

}
