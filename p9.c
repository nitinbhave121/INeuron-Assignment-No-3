
// Write a program which takes the cost price and selling price of a product from the
// user. Now calculate and print profit or loss percentage.

#include<stdio.h>
int main()
{
    int sp,cp;
    printf("Enter selling Price and Cost Priece \n");
    scanf("%d%d",&sp,&cp);
    if(sp>cp)
    printf("Profit is %d",sp-cp);
    else
    printf("Loss is %d",cp-sp);
    return 0;
}
/*
Enter selling Price and Cost Priece
100 120
Loss is 20
*/