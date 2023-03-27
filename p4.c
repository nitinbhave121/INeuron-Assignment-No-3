// Write a program to check whether a given number is a three digit number or not.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(n>99 && n<1000)
    printf("%d is a three digit number\n",n);
    else
    printf("%d is not three digit number\n",n);
    return 0;

}


/*
Enter any number
1020
1020 is not three digit number
*/