#include<stdio.h>
int main()
{
    int n,i,z,a;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a);
        z=fact(a);
        printf("%d\n",z);
    }
    return 0;
}
int fact(int a)
{
    int z=0;
    if(a<5)
        return 0;
    else
    {
        while(a > 4)
        {
            a=a/5;
            z=z+a;
        }
        return z;
    }
}
 
