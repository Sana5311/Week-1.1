#include<stdio.h>
int main(){
	int a,b,f,i,j;
	printf("Enter the two numbers:\n");
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++){
		if(i==1||i==0)
			continue;
			f=1;
			for(j=2;j<=i/2;j++){
				if(i%j==0){
					f=0;
					break;
				}
			}
			if(f==1)
			printf("%d",i);
}
return 0;
}
