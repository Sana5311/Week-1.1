#include<stdio.h>
int main(){
	int num,i,rem,sum=0;
	printf("enter the number:");
	scanf("%d",&num);
	while(num>0){
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("%d",sum);
	return 0;
}
