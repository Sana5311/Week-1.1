#include<stdio.h>
int main(){
	int m,n,a[m][n],i,j;
	printf("Number of rows in the matrix:");
	scanf("%d",&m);
	printf("Number of columns in the matrix:");
	scanf("%d",&n);
	printf("Enter the elements of the array: ");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	return 0;
	
}
