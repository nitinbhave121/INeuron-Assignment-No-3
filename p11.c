
// . Write a program to check whether a given alphabet is in uppercase or lowercase

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Any Character\n");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    printf("Entered character %c is in Uppercase",ch);
    if(ch>=97 && ch<=122)
    printf("Entered character %c is in Lowercase",ch);
    return 0;
}

/*
Enter Any Character
a
Entered character a is in Lowercase
*/