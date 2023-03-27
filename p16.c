// Write a program which takes the length of the sides of a triangle as an input. Display
//whether the triangle is valid or not.
/*
*************************************************
The Triangle is valid if the sum of two sides is greater than third side

*/

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three sides of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b<=c||a+c<=b||b+c<=a)
    printf("The given triangle is valid \n");
    else
    printf("The given Triangle is not valid\n");
    return 0;
}

/*
Enter the three sides of triangle
10 2 2
The given triangle is valid
*/