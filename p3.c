
//Write a program to check whether a given number is an even number or an odd
//number


#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(n%2==0)
    printf("%d is Even number\n",n);
    else
    printf("%d is Odd number\n",n);
    return 0;
}

/*
Enter any number
5
5 is Odd number*/