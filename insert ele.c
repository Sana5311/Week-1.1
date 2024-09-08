#include<stdio.h>
int main(){
	int n,a[n],i,ele,pos;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements of the array:");
	for(i=0;i<n;i++){
			scanf("%d",&a[i]);
	}
	printf("enter the position:");
	scanf("%d",&pos);
	printf("enter the element:");
	scanf("%d",&ele);
	n=n+1;
	for(i=n-1;i>=pos;i--){
		a[i]=a[i-1];
	}
	a[pos-1]=ele;
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}
