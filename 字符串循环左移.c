#include<stdio.h>
#include<string.h>
int main()
{
  char str[100];
  gets(str);
  int n = 0;
  scanf("%d",&n);
  for(int i = 0;i < n%strlen(str);i++)
  {
      char t = str[0];
      for(int j = 1;j < strlen(str);j++)
      {
          str[j-1] = str[j];
      }
      str[strlen(str)-1] = t;
  }
  puts(str);
}


