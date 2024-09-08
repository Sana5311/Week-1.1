#include<stdio.h>

int main(){
	int n,a[n],i;
	printf("Enter the number of elements to be entered:");
	scanf("%d",&n);
	printf("Input the array element:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int ele;
	printf("Enter element:\n");
	scanf("%d",&ele);
	for(i=0;i<n;i++){
		if(ele==a[i]){
			printf("Element is found at %d",i);
	}
	else{
			printf("not found");	
			
		}
	}	
	return 0;
}
