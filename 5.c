#include<stdio.h>
#include<string.h>

int main()
{
    int A,B; scanf("%d %d",&A,&B);

    if(A>=-1000 && A<=1000 && B>=-1000 && B<=1000)
    {
        if(A+B>A-B)
       {
           if(A+B>A*B)
           {
               printf("%d",A+B);
           }
           else
           {
               printf("%d",A*B);
           }
       }
       else if(A-B>A*B)
       {
           printf("%d",A-B);
       }
       else
       {
           printf("%d",A*B);
       }
    }

    return 0;
}