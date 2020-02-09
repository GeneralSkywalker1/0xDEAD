#include<stdio.h>
#include<string.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i < n;i++)
       {
           a[i] = 1;
       }
    int cnt1 = 0;
    int cnt = 0;
    int mark = 0;
    for(int i = 0;i < n;i++)
    {
        if(a[i] == 1)
            {
                cnt1++;
                cnt++;
                if(cnt%3!=0)
                    mark=i+1;
                else
                {
                    a[i] = 0;
                    cnt1--;
                }
            }
       if(i==n-1)
       {
           if(cnt1==1)
           {
               printf("%d",mark);
               break;
           }
           else
           {
               i = -1;
               cnt1 = 0;
           }
       }
    }

}
