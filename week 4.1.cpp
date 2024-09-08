#include<stdio.h>
int main(){
	int n,a[n],i,sum=0,max,min,avg;
	printf("enter the number of elements in array:");
	scanf("%d",&n);
	printf("enter the elements of array:");
	for(i=0;i<n;i++){
			scanf("%d\n",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++){
		sum=sum+a[i];
		if(a[i]>max){
			max=a[i];
		}
		else if(a[i]<min){
			min=a[i];
		}
	}
	avg=sum/n;
	printf("\nsum of the elements of array is %d ",sum);
	printf("\nmaximun element of array is %d ",max);
	printf("\nminimum element of array is %d ",min);
	printf("\naverage of the elements of array is %d ",avg);
	return 0;
}
