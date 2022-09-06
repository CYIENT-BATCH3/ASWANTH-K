//program using pointer
1.start
2.declaring variable
3.declaring pointer
4.printing value
printning address


#include <stdio.h>
int main()
{
    int a=3;//declaring variable
    float b=6;//declaring variable
    char ch='a';//declaring varible
    int *p1=&a;//declaring pointer
    float *p2=&b;//declaring pointer
    char *p3=&ch;//fdeclaring pointer
    printf("\n value of a %d",*p1);//value of a
    printf("\n value of b %f",*p2);//value of b
    printf("\n value of ch %c",*p3);//value of ch
    printf("\naddress of a %p",p1);//address of a
    printf("\naddress of b is%p",p2);//address of b
    printf("\naddress of ch %p",p3);//address of ch 
}
