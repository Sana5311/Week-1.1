#include<stdio.h>

int main(){
	int a,b,num1,num2,t,hcf,lcm;
	printf("enter first number:");
	scanf("%d",&num1);
	printf("enter second number:");
	scanf("%d",&num2);
	a=num1;
	b=num2;
	while(b!=0){
		t=b;
		b=a%b;
		a=t;
	}
	hcf=a;
	lcm=(num1*num2)/hcf;
	printf("hcf=%d",hcf);
	printf("lcm=%d",lcm);
}
