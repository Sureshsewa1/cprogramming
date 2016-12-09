/*Student Name: Suresh Sewa
Subject: Programming Fundamental
Roll No:
Lab Sheet:
Program: C program to print the largest number among three using ternary
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

              printf("enter the tharad number:\n");
    scanf("%d",&c);

    (a-b>0&&a-c>0)?printf("the largest number %d:\n",a):(b-c>0&&b-a>0)?printf("the largest number %d:\n",b):printf("the largest number %d:\n",c);


    getch();
    return 0;


}
