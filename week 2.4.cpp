#include<stdio.h>
int main(){
	int n,rev=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0){
		int r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("reverse of the number is %d",rev);
	return 0;
}
