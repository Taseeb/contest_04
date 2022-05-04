#include<stdio.h>
#include<string.h>

int main()
{
    int A,B,C; scanf("%d %d %d",&A,&B,&C); 

    if(A>=1 && A<=9 && B>=1 && B<=9 && B>=1 && B<=9)
    {
        if((A==B && A!=C) || (B==C && A!=C) || (A==C && B!=C))
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }  
    }


    return 0;
}