#include<stdio.h>
int main(){
	int a[2][3],b[3][2],c[2][2],i,j,k;
	printf("enter the elements of the first array:");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
		printf("enter the elements of the second array:");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=0;
			for(k=0;k<3;k++){
			c[i][j]=c[i][j]+a[i][k]*b[k][j];
		}
	}	
}
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
