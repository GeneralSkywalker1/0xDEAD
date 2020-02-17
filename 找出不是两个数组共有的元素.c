#include<stdio.h>
#include<string.h>
#include<math.h>
int check(int cnt,int n1,int n2,int a[],int b[],int c[])
{
    for(int i = 0;i < n1;i++)
   {
       int flag = 0;
       for(int j = 0;j < n2;j++)
       {
           if(a[i] == b[j])
           {
               flag = 1;
               break;
           }
       }
       for(int k = 0;k < cnt;k++)
       {
           if(a[i] == c[k])
           {
               flag = 1;
               break;
           }
       }
       if(flag == 0)
        {
            if(cnt == 0)
                {
                    printf("%d",a[i]);
                }
            else
                printf(" %d",a[i]);
            c[cnt] = a[i];
            cnt++;
        }

   }
        return cnt;

}
int main()
{
   int n1 = 0,n2 = 0;
   scanf("%d",&n1);
   int a[n1];
   for(int i = 0;i < n1;i++)
   {
       scanf("%d",&a[i]);
   }
   scanf("%d",&n2);
   int b[n2];
   for(int j = 0;j < n2;j++)
   {
       scanf("%d",&b[j]);
   }
   int cnt = 0;
   int c[50];
   cnt = check(cnt,n1,n2,a,b,c);
   cnt = check(cnt,n2,n1,b,a,c);

}


