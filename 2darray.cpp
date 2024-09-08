#include<stdio.h>
int main(){
	int m,n,i,j,a[m][n];
	printf("enter the no. of rows:");
	scanf("%d",&m);
	printf("enter the number of columns:");
	scanf("%d",&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	return 0;
}
