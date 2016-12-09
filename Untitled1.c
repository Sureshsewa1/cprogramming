/*Student Name: Suresh Sewa
Subject: Programming Fundamental
Roll No:
Lab Sheet:
Program: C program to print the largest number among three using if elseif ladder
Date: 09/12/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;

                printf("enter the first number:\n");
    scanf("%d",&a);

                printf("enter the second number:\n");
    scanf("%d",&b);

                printf("enter the third number:\n");
    scanf("%d",&c);

    if (a>=b&&b>=c)
    {
                printf("the largest number is:%d",a);
    }
    else if (b>=c&&c>=a)
    {
        printf("the largest number is:%d",b);
    }
    else
    {
        printf("the largest number is:%d",c);
    }
    getch();
    return 0;


}
