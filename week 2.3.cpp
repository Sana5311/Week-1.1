#include<stdio.h>
int main(){
	int a,i,count=0;
	printf("enter the number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		if(a%i==0){
			count++;
		}
	}
	if(count==2){
		printf("entered number is prime");
	}
	else{
		printf("it is not prime number,");
	}
	return 0;
}
