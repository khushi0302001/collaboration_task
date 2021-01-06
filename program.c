#include<stdio.h>
#include<math.h>

int sum(int ,int);

int main(){
	printf("hello funccforce members");
	
	printf("The sum of these numbers :%d",sum(10,10));
	
	double a, b , product;
	printf("Enter two numbers : ");
	scanf ("%lf %lf ,&a,&b);
	 //calculating product 
	       product =a*b;
	 //Result
	  printf("Product = %.2lf",product);
	       

}

int sum(int a, int b)//defining function based in declaration
{
    int result=a+b;//find sum of two numbers
    //and result of sum stored in result variable
    return result;//returning result
}
	
