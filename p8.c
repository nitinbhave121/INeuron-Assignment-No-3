
// Write a program to find the greatest among three given numbers. Print number once
//if the greatest number appears two or three times.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a , b, c\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("%d is Greater \n",a);
    
    if(b>a&&b>c)
    printf("%d is Greater \n",b);
    if(c>a&&c>b)
    printf("%d is Greater \n",c);
    return 0;
}

/*
Enter the value of a , b, c
56 6 7
56 is Greater
*/