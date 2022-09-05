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
//char prev=' ';
int i=0,count=1;//declaring variables
printf("enter a string");
scanf("%[^\n]s",str);//reading str
while(str[i] !='\0')
{
    if(str[i] == ' '||str[i]=='\t')
    {
        
        count++;
        
    }
   
    i++;
}
printf("word count === %d",count);
}
