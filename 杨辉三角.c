#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    int a[n];
    a[0] = 1;
    a[1] = 1;
    int space = n - 1;
    for(int h = 0;h < space;h++)
            putchar(' ');
    space--;
    printf("%4d\n",1);
    if(n!=1)
    {
        for(int h = 0;h < space;h++)
            putchar(' ');
        printf("%4d%4d\n",1,1);
        space--;
    }
    for(int i = 1;i < n - 1;i++)
    {
        for(int h = 0;h < space;h++)
            putchar(' ');
        space--;
        printf("%4d",1);
        int t = 0;
        int k = 0;
        int flag = 1;
        for(int j = 1;j < i + 1;j++)
        {   if(flag==1)
                t = a[j];
            else
                k = a[j];
            if(j==1)
                a[j] = a[j] + 1;
            else if(flag==-1)
                a[j] = a[j] + t;
            else
                a[j] = a[j] + k;
            printf("%4d",a[j]);
            flag = -flag;
        }
        a[i+1] = 1;
        printf("%4d\n",a[i+1]);
    }
}


