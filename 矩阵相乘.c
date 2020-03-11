#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d%d",&a,&b);
    int rec1[a][b];
    for(int i = 0;i < a;i++)
    {
        for(int j = 0;j < b;j++)
        {
            scanf("%d",&rec1[i][j]);
        }
    }
    int c = 0;
    int d = 0;
    scanf("%d%d",&c,&d);
    int rec2[c][d];
    for(int i = 0;i < c;i++)
    {
        for(int j = 0;j < d;j++)
        {
            scanf("%d",&rec2[i][j]);
        }
    }
    if(b!=c)
    {
        printf("Error: %d != %d",b,c);
    }
    else
    {
      printf("%d %d\n",a,d);
      for(int i = 0;i < a;i++)
      {
          for(int j = 0;j < d;j++)
          {
              int sum = 0;
              for(int k = 0;k < b;k++)
              {
                  sum+=rec1[i][k]*rec2[k][j];
              }
              printf("%d",sum);
              if(j!=d - 1)
                printf(" ");
              else if(i!=a - 1)
                printf("\n");
          }
      }
    }

}
