#include<stdio.h>

int main(){
	int n,a[n],i,ele,pos,found=0;
	printf("Enter the number of elements to be entered:");
	scanf("%d",&n);
	printf("Input the array element:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be deleted\n");
	scanf("%d",&ele);
	for(i=0;i<n;i++){
		if(a[i]==ele){
			found=1;
			break;
		}pos=i;
	}
	if(found==1){
		for(i=pos;i<n-1;i++){
			a[i]=a[i-1];
		}
	}
	printf("After deletion the array is:");
	for(i=0;i<n-1;i++){
		printf("%d",a[i]);
	}
	return 0;
}
