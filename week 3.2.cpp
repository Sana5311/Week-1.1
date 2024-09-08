#include<stdio.h>
int main(){
	int num,rem;
	printf("enter decimal number");
	scanf("%d",&num);
	while(num>0){
		rem=num%2;
		printf("%d",rem);
		num=num/2;
	}
	return 0;
}
