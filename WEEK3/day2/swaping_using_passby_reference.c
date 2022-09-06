//program for swaping two numbers using pass by reference
/*
1.start
2.read inputs
3. call swap function using pass by reference
4.perform swaping operation using temporary variable

*/
#include <stdio.h>
void swap(int *num1,int *num2);//function prototype
int main()
{
    int num1,num2;//declaring variables
    int *ptr1=&num1;//declaring ptr1 pointer
    int *ptr2=&num2;//decalring ptr2 pointer
    printf("enter two numbers\n");
    scanf("%d%d",&num1,&num2);//read inputs
    printf("number berfore swaping num1= %d num2=%d",num1,num2);
    swap(&num1,&num2);//calling swap function using pass by reference
    printf("\nnumbers after swaoing == num1=== %d num2==%d",num1,num2);
    return 0;
}
void swap(int *num1,int *num2)//defining function
{
    
    int *temp;//declaring temporary pointer variable
    *temp=*num1;//assigning *num1 to *temp
    *num1=*num2;//assigning *num2 to *num1
    *num2=*temp;//assigning *temp to *num2
   
}
