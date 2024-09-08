#include<stdio.h>
int main(){
	int a[]={};
	int i=0,rem,num,sum=0;
	printf("enter the number:");
	scanf("%d",&num);
	while(num>0){
		rem=num%10;
		a[i]=rem;
		i++;
		num=num/10;
	}
	for(int j=0;j<i;j++){
		if(j%2!==0){ 
		 sum=sum+a[i];
		}
	}
	printf("%d",sum);
	return 0;
}
