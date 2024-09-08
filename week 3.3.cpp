#include<stdio.h>
int main(){
	int i,n,count_v=0,count_c=0;
	char s[100];
	printf("enter any string:");
	scanf("%s",&s);
	while(s[i]!='\0'){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
			count_v++;
		}
		else{
		count_c++;
	}
	i++;
	}
	printf("total vowels are : %d\n",count_v);
	printf("total consonants are : %d",count_c);
	return 0;
}
