#include<stdio.h>
int calc(float);
int main()
{
    int r;
    float c;
    while(1)
    {
        scanf("%f",&c);
        if( c > 0.01 && c < 5.20)
        {
            r=calc(c);
            printf("%d card(s)\n",r);
        }
        else
            break;
    }
 
    return 0;
}
int calc(float x)
{
    int c=0;
    float sum=0.00,i=2;
    while(sum<=x)
    {
        sum = sum + 1/i;
        i++;
        c++;
    }
    return c;
}
