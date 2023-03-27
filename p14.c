
// Write a program to check whether a given number is positive, negative or zero

#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(n>0)
    printf("%d is positive number\n",n);
    else if(n==0)
    printf("Entered Number is 0\n");
    else
    printf("%d is Negative number\n",n);
    return 0;
}

/*
Enter any number
1
1 is positive number
*/