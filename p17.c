
//Write a program which takes the month number as an input and display number of
//days in that month

#include<stdio.h>
int main()
{
    int N;
    printf("Enter the Month Number\n");
    scanf("%d",&N);
    if(N<=12 &&N/2==1)
    printf("The Entered Month have 31 days\n");
    if(N<=12&&N%2==0&&N!=2)
    printf("Enterd Month have 30 days\n");
    if(N==2)
    printf("The given months have 28 or 29 days\n");
    return 0;
    

}

/*
Enter the Month Number
2
The Entered Month have 31 days
The given months have 28 or 29 days
*/

