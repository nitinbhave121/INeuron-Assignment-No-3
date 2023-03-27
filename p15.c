
// . Write a program to check whether a given character is an alphabet (uppercase), an
//alphabet (lower case), a digit or a special character

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Any Character\n");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    printf("Entered character %c is in Uppercase its ASCII value is %d",ch,ch);
    if(ch>=97 && ch<=122)
    printf("Entered character %c is in Lowercase its ASCII value is %d",ch,ch);
    if((ch>=32&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=126))
    printf("Entered character %c is Special Character its ASCII value is %d\n",ch,ch);
    if(ch>=48&&ch<=57)
    printf("Entered character %c is digit its ASCII value is %d\n",ch,ch);
    return 0;
}

/*
Enter Any Character
@
Entered character @ is Special Character its ASCII value is 64
*/