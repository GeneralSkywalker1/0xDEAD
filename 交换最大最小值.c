#include<stdio.h>
#include<string.h>
int main()
{
   int n = 0;
   scanf("%d",&n);
   const int MAXN = n;
   int num[MAXN];
   scanf("%d",&num[0]);
   int max = num[0];
   int min = num[0];
   int markma = 0;
   int markmi = 0;
   for(int i = 1;i < MAXN;i++)
   {
       scanf("%d",&num[i]);
       if(num[i] > max)
       {
           max = num[i];
           markma = i;
       }
       if(num[i] < min)
       {
           min = num[i];
           markmi = i;
       }
   }
   int t = 0;
   t = num[0];
   num[0] = num[markmi];
   num[markmi] = t;
   if(markma == 0)
    markma = markmi;
   t = num[MAXN-1];
   num[MAXN-1] = num[markma];
   num[markma] = t;
   for(int j = 0;j < MAXN;j++)
   {
       printf("%d ",num[j]);
   }
}
