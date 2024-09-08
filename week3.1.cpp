#include<stdio.h>
int main(){
	int num,decimal_val=0,rem,base=1,binary_val=0;
	printf("Enter the binary number:");
	scanf("%d",&num);
	while(num>0){
		rem=num%10;
		decimal_val=decimal_val+rem*base;
		num=num/10;
		base=base*2;
	}
	printf("Decimal value is : %d",decimal_val);
	return 0;
}
