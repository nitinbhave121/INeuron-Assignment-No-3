

// Write a program to check whether roots of a given quadratic equation are real &
//distinct, real & equal or imaginary roots

#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter the coefficients a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    printf("Here d=%f The roots are Real and Unequal\n",d);
    else if(d==0)
    printf("Here d=%f The Roots are Real and Equal\n",d);
    else
    printf("Here d=%f The Roots are Imaginary\n",d);
    return 0;
}

/*
Enter the coefficients a,b,c
2
14
4
Here d=164.000000 The roots are Real and Unequal
*/