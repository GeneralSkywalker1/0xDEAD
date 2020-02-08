#include<stdio.h>
#include<string.h>
int main()
{
  char str[81];
  gets(str);
  char a = getchar();
  int cnt = 0;
  for(int i = 0;i < strlen(str);i++)
  {
      if(str[i] == a)
      {
          cnt++;
      }
  }
  printf("%d",cnt);


}
