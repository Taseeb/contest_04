#include<stdio.h>

int main()
{
    int A,B; scanf("%d %d",&A,&B);

    if(A>=0 && B<=10000 && B<=2*A+100)
    {
        printf("%d",2*A+100-B);
    }

    return 0;
}