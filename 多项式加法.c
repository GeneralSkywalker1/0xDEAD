#include<stdio.h>
struct mult
{
    int xi;
    int zhi;
};
typedef struct mult Smult;
void add(Smult*a,Smult*b,int c,int d)
{
    int i = 0;
    int j = 0;
    while(i!=c&&j!=d)
    {
        if(a[i].zhi>b[j].zhi)
            {
                printf("%d %d ",a[i].xi,a[i].zhi);
                i++;
            }
        else if(b[j].zhi > a[i].zhi)
            {
                printf("%d %d ",b[j].xi,b[j].zhi);
                j++;
            }
        else
            {
                printf("%d %d ",a[i].xi+b[j].xi,a[i].zhi);
                i++;
                j++;
            }
    }
    for(;i < c;i++)
        printf("%d %d ",a[i].xi,a[i].zhi);
    for(;j < d;j++)
        printf("%d %d ",b[j].xi,b[j].zhi);
}
int main()
{
    int a = 0;
    scanf("%d",&a);
    Smult mult1[a];
    for(int i = 0;i < a;i++)
    {
        scanf("%d%d",&mult1[i].xi,&mult1[i].zhi);
    }
    int b = 0;
    scanf("%d",&b);
    Smult mult2[b];
    for(int i = 0;i < b;i++)
    {
        scanf("%d%d",&mult2[i].xi,&mult2[i].zhi);
    }
    add(mult1,mult2,a,b);
}
