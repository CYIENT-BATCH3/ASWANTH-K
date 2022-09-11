#include<stdio.h>
#include"addition.h"//addition header file
#include"substraction.h"//substraction header file
#include"multiplication.h"//multiplication headerfile
int main()
{
	setbuf(stdout,NULL);
	int num1,num2,sum=0,diff=0,mu=0;//declare variable
	printf("enter two numbers\n");
	scanf("%d%d",&num1,&num2);//reading element
	sum=add(num1,num2);//calling addition function in addition header file 
	printf("sum %d\n",sum);//finding sum
	diff=sub(num1,num2);//calling sub function in substraction headerfile 
        printf("difference is %d",diff);
	mu=mul(num1,num2);//calling mul function in multiplication header file
	printf("\nmul is %d",mu);
}
