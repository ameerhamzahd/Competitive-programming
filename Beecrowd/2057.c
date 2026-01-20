#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=a+b+c;
    {
        if(d==24)
        {
            d=0;
        }
        else if(d<24 && d>0)
        {
            d=d;
        }
        else if(d>24)
        {
            d=d-24;
        }
        else if(d<0)
        {
            d=d+24;
        }
    }
    printf("%d\n",d);
    return 0;
}
