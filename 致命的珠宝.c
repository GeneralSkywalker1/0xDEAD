#include<stdio.h>
#include<string.h>
#include<math.h>
int cmp(char*str1,char*str2)
{
    int s = 1;
    int sum = 0;
    int i = 0;
    for( i = 0;i < 6;i++)
    {
        if(str1[i]!='0'||str2[i]!='0')
        {
            break;
        }
    }
    if(i==6)
    return 1;
    for(int j = 5;j >= i;j-- )
    {
        if(str1[j]==str2[j])
        {
            s*=2;
        }
        else
        {
            sum+=s;
            s*=2;
        }
    }
    return sum;
}
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  char num[1200][7];
  for(int i = 0;i < n;i++)
  {
      scanf("%d",&a[i]);
      strcpy(num[i],"000000");
  }
  for(int i = 0;i < n;i++)
  {
      int j = 5;
      int s = a[i];
      while(s!=0)
      {
          num[i][j]+=s%7;
          s/=7;
          j--;
      }
  }
  int sum = 0;
  int sumclose = 1000;
  int s = 0;
  for(int i = 0;i < n;i++)
  {
      for(int j = i+1;j < n;j++)
      {
          sum = cmp(num[i],num[j]);
          if(fabs(sum - 16)<sumclose)
          {
              s = sum;
              sumclose = fabs(sum - 16);
          }

      }
  }
  printf("%d",s);

}


