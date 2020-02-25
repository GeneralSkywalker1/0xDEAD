#include<stdio.h>
#include<string.h>
int main()
{
  char s1[81];
  char s2[81];
  gets(s1);
  gets(s2);
  for(int i = 0;i < strlen(s1);i++)
  {
      if(s1[i] == s2[0])
      {
          int flag = 0;
          for(int j = i,h = 0;h < strlen(s2) && j < strlen(s1);j++,h++)
          {
              if(s1[j]!=s2[h])
                {
                    flag = 1;
                    break;
                }
          }
          if(flag == 0)
          {
              int k = i+strlen(s2);
              for( k = i+strlen(s2);k < strlen(s1);k++)
              {
                  s1[k - strlen(s2)] = s1[k];
              }
              for(int h = 1;h <= strlen(s2);h++)
              {
                  s1[k - h] = 0;
              }
              i-=strlen(s2);
              if(i < 0)
                i = -1;
          }

      }

  }
  printf("%s",s1);
}


