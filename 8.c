#include<stdio.h>
#include<string.h>

int main()
{
    int a,b; scanf("%d %d",&a,&b); int years=0;

    if(1<=a && a<=b && b<=10)
    {
        while(1)
        {
            
            if(a>b)
            {
                break;
            }
            else years++;

            a = 3*a;
            b = 2*b;
        }

        printf("%d",years);

    }

    return 0;
}