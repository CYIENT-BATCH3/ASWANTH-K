float calculator(char ch,int num1,int num2)//defining function
{
	
switch(ch)
    {
    case '+':return num1+num2;break;//perform addition if ch is +
    case '-':return num1-num2;break;//perform substraction if ch is -
    case '*':return num1*num2;break;//performing multiplication
    case '/':return num1/num2;break;//performing division
    case '%':return num1%num2;break;//performing modulus operations
    default:printf("please enter valid operator");
    }
return 0;
}


