//wap in c c to count the total number of words in c string 
/*
1. start
2.read string
3.execute upto null character
4.inside the loop check for the NULL INCREASE COUNT
*/



#include <stdio.h>

int main() {
   
char str[56];//declaring a string
char prev=' ';//declare prev as space
int i=0,count=0;//declaring variables
printf("enter a string\n");
scanf("%[^\n]s",str);//reading str
while(str[i] !='\0')
{
    if(str[i] ==' '&&str[i]!=prev)//checking if the character is space or previous
    {
        
        count++;//incrementing count
        
    }
   prev=str[i];//changing the previous value as str[i]
    i++;//incrementing the i value
}
count++;//incrementing count
printf("word count === %d",count);
}
