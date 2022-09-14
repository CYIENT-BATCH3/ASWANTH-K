//program for arithmetic calculator using different header files

#include<stdio.h>
#include"calculator.h"//including calculator.h file
#include"prototype.h"//including prototype.h
int main()
{
    setbuf(stdout,NULL);
	int num1,num2;//declaring variable
	char ch;//declaring variable
	printf("enter two numbers num and num2\n");
	scanf("%d%d",&num1,&num2);//reading inputs
	getchar();//reading \n
    printf("enter an operator \n");
    scanf("%c",&ch);//reading operator
    float res=calculator(ch,num1,num2);//calling function and returning output
    printf("\nresult of %d %c %d == %f",num1,ch,num2,res);//printing the output
}
