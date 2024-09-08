#include<stdio.h>
int main(){
	int f1=0,f2=1,f3,n,i;
	printf("enter the number of term:");
	scanf("%d",&n);
	printf("%d\n%d\n",f1,f2);
	for(i=0;i<n-2;i++){
		f3=f1+f2;
		f1=f2;
		f2=f3;
		printf("%d\n",f3);
	}
	return 0;
}
