/*Student Name: Suresh Sewa
Subject: Programming Fundamental
Roll No:
Lab Sheet:
Program: C program to print the largest number among two using ternary
Date: 09/12/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;

                printf("enter the first number:\n");
    scanf("%d",&a);

                printf("enter the second number:\n");
    scanf("%d",&b);

    (a-b>0)?printf("the largest number %d:\n",a):printf("the largest number %d:\n",b);


    getch();
    return 0;


}
