#include<stdio.h>
int main(){
	int n,a[n],i,j,t;
	printf("enter the number of elements in array:");
	scanf("%d",&n);
	printf("enter the elements of array:");
	for(i=0;i<n;i++){
			scanf("%d\n",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i;j++){
			if(a[i]>a[i+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("Sorted list in accending order : \n");
		for(i=0;i<n;i++){
			printf("%d\n",a[i]);
	}
	return 0;
}
