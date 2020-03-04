#include<stdio.h>
#include<string.h>
int main()
{
  int n = 0;
  scanf("%d",&n);
  getchar();
  int num[10] = {0};
  int max = 0;
  for(int i = 0;i < n;i++)
  {
      char a[20];
      scanf("%s",a);
      for(int i = 0;i < strlen(a);i++)
      {
          num[a[i] - '0']++;
      }
  }
  for(int i = 0;i < 10;i++)
  {
      if(num[i] > max)
      {
          max = num[i];
      }
  }
  printf("%d:",max);
  for(int i = 0;i < 10;i++)
  {
      if(num[i]==max)
        printf(" %d",i);
  }

}


