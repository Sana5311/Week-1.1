#include<stdio.h>
int main(){
	int n,m,a[n],b[m],i,j,k;
	printf("enter the number of elements insert in first array");
	scanf("%d",&n);
	printf("enter the number of elements insert in second array");
	scanf("%d",&m);
	printf("enter the elements of the first array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the elements of the second array:");
	for(j=0;j<m;j++){
		scanf("%d",&b[j]);
	}
	int c[n+m];
	i=j=0;
	for(k=0;k<n+m;k++){
		if(i<n && j<m){
			if(a[i]<b[j]){
				c[k]=a[i];
				i++;
			}
		
			else{
				c[k]=b[j];
				j++;
			}
		}
		else if(i<n){
			c[k]=a[i];
			i++;
		}
		else{
		c[k]=b[j];
		j++;
	}
	}
	printf("The sorted array is ");
	for(k=0;k<n+m;k++){
		printf("%d",c[k]);
	}
	return 0;
}
