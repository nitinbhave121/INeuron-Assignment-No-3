

/*
. Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed
*/

#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float p;
    printf("Enter the marks of 5 subjects\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    p=((a+b+c+d+e)*100)/500;
    if(p>=33)
    printf("Percentage =%f student is Passed the Exam\n",p);
    else
    printf("Percentage =%f Student is Failed\n",p);
    return 0;
}

/*
Enter the marks of 5 subjects
23 45 34 56 12
Percentage =34.000000 student is Passed the Exam
*/