
// Write a program to print greater between two numbers. Print one number if both are
//the same

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    if(a>=b)
    printf("%d is Greater\n",a);
    else
    printf("%d is greater",b);
    return 0;
}


/*
Enter two numbers
14 15
15 is greater
*/