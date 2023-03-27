// Write a program to check whether a given number is divisible by 3 and divisible by 2

#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(n%2==0&&n%3==0)
    printf("%d is divisible by both 3 and 2\n",n);
    else
    printf("%d is not divisible by 3 and 2\n",n);
    return 0;
}

/*
Enter any number
6
6 is divisible by both 3 and 2
*/