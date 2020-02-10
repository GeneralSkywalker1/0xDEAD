#include<stdio.h>
#include<string.h>
int main()
{
   char num[1001];
   gets(num);
   int n[10]={0};
   for(int i = 0;i < strlen(num);i++)
   {
       n[num[i]-'0']++;
   }
   for(int i = 0;i < 10;i++)
   {
       if(n[i]!=0)
           {
               printf("%d:%d\n",i,n[i]);
           }
   }
}
