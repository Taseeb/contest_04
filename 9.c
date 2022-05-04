#include<stdio.h>
#include<string.h>


int gradingStudents(int grade)
{
    int new_grade = grade;
    if(grade<38)
    {
        return grade;
    }
    else
    {
        while(1)
        {
            if(new_grade%5==0)
            {
                if(new_grade-grade<3)
                {
                    return new_grade;
                }
                else{ return grade;}
            }
            new_grade++;
        }
    }

}




int main()
{
    int n; scanf("%d",&n); int grades; int g[n];
    for(int i=0;i<n;++i)
    {
        scanf("%d",&grades); grades =  gradingStudents(grades); g[i] = grades;
    }

   for(int i=0;i<n;++i)
    {
       printf("%d\n",g[i]);
    }

    return 0;
}