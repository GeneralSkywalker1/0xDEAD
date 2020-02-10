#include<stdio.h>
#include<string.h>
int main()
{
   char a[10001];
   char b[10001];
   gets(a);
   gets(b);
   int flag = 1;
   for(int i = 0;i < strlen(a);i++)
   {
       flag = 1;
       for(int j = 0;j < strlen(b);j++)
       {
           if(a[i]==b[j])
           {
               flag = 0;
               break;
           }
       }
       if(flag==1)
       {
           printf("%c",a[i]);
       }
   }
}
