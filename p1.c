
// Write a program to check whether a given number is positive or non positive.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(n>0)
    printf("%d is positive number\n",n);
    else if(n==0)
    printf("0 is non positive and non negative\n");
    else
    printf("%d is Negative number\n",n);
    return 0;
}

/*
Enter any number
10
10 is positive number*/