#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
   char cal[81] = "\0";
   int flag = 1;
   char a = 0;
   int mark = 0;
   for(int i = 0;i < 81;)
   {
       scanf("%c",&a);
       if(a == '-')
        {
           if(i <= mark||mark == 0)
           {
              flag = -1;
              mark = 82;
           }
        }
       if(a == '#')
        {
            cal[i] = '\0';
            break;
        }
       if((a>='0'&&a<='9')||(a>='a'&&a<='f')||(a>='A'&&a<='F'))
       {
           mark = i;
           cal[i] = a;
           i++;
       }
   }
   int sum = 0;
   int s = 1;
   for(int i = strlen(cal) - 1;i >= 0;i--)
   {
       if(cal[i]>='0'&&cal[i]<='9')
       {
           sum+=(cal[i] - '0')*s;
           s*=16;
       }
       else if(cal[i]>='a'&&cal[i]<='z')
       {
           sum+=(cal[i] - 87)*s;
           s*=16;
       }
       else
       {
           sum+=(cal[i] - 55)*s;
           s*=16;
       }
   }
   printf("%d",flag*sum);

}
