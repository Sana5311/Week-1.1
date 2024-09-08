#include<stdio.h>

int main(){
	int n,a[n],i,min,max;
	printf("Enter the number of elements to be entered:");
	scanf("%d",&n);
	printf("Input the array element:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	min=a[0];
	max=a[0];
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
		else if(a[i]<min){
			min=a[i];
		}
	}
	printf("\nMaximum element is:%d",max);
	
	printf("\nMinimum element is:%d",min);
	return 0;
}
