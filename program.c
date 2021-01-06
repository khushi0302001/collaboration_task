#include<stdio.h>
#include<math.h>

int sum(int ,int);

int main(){
	printf("hello funccforce members");
	
	printf("The sum of these numbers :%d",sum(10,10));
	printf("The product of these numbers :%d",multiply(10,10));
	
}

int sum(int a, int b)//defining function based in declaration
{
    int result=a+b;//find sum of two numbers
    //and result of sum stored in result variable
    return result;//returning result
}

int multiply(int a, int b)//defining function based in declaration
{
    int result=a*b;//find sum of two numbers
    //and result of sum stored in result variable
    return result;//returning result
}
	
