#include<stdio.h>
#define PI 3.1415926535
int main()
{
    while(1)
    {
        printf("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\nPlease enter your command:\n");
        int com = 0;
        scanf("%d",&com);
        if(com == 1)
        {
            printf("Please enter the radius:\n");
            float r = 0;
            scanf("%f",&r);
            printf("%.2f\n",4.0/3*PI*r*r*r);
        }
        else if(com == 2)
        {
            printf("Please enter the radius and the height:\n");
            float r = 0,h = 0;
            scanf("%f%f",&r,&h);
            printf("%.2f\n",PI*r*r*h);
        }
        else if(com ==3)
        {
            printf("Please enter the radius and the height:\n");
            float r = 0,h = 0;
            scanf("%f%f",&r,&h);
            printf("%.2f\n",1.0/3*PI*r*r*h);
        }
        else
            break;

    }
}
