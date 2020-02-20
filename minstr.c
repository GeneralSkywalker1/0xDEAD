#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
   int n = 0;
   scanf("%d",&n);
   getchar();
   char min[81];
   gets(min);
   for(int i = 0;i < n - 1;i++)
   {
       char a[81];
       gets(a);
       if(strcmp(a,min) <= 0)
        strcpy(min,a);
   }
   printf("Min is: %s\n",min);

}
