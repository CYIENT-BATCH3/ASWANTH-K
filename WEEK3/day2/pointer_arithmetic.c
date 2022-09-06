//program using pointer aritmetic
1.start
2.declare variables
3.performing pointer arithmetic


#include <stdio.h>
int main()
{
    int a=3,b=6;//declaring variable
    char ch='a';//declaring varible
    int *p1=&a;//declaring pointer
    int *p2=&b;//declaring pointer
    char *p3=&ch;//declaring pointer
  printf("\n summmmm of p1 + p2%p",p1+p2);//invalid we can't add
   printf("\n summmmm of p1 + 2 ==== %p",p1+2);//pointer + integer is possible
   printf("\n difference of p1 - 2 ==== %p",p1-2);//pointer - integer is possible
   printf("\n difference of p1 - p2 ==== %d",p1-p2);//pointer - pointer is possible
   printf("\n  multiplication of p1 * 2 %p",p1*2);//pointer multiplication is not possible 
    printf("\n  division of p1 / 2 %p",p1/2);//pointer division is not possible 
   
}
