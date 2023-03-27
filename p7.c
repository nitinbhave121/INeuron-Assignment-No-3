
// Write a program to check whether a given year is a leap year or not.

#include<stdio.h>
int main()
{
    int year;
    printf("Enter year to check it is Leap or not\n");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0)|| (year%400==0))
    printf("%d is a Leap Year\n",year);
    else
    printf("%d is not a Leap Year\n",year);
}

/*Enter year to check it is Leap or not
2018
2018 is not a Leap Year
*/