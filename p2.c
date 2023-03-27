
//Write a program to check whether a given number is divisible by 5 or not

#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(n%5==0)
    printf("Number is divisible by 5\n");
    else
    printf("Number is not divisible by 5\n");
    return 0;
}

/*
Enter any number
10
Number is divisible by 5*/