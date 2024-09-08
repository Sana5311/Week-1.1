#include<stdio.h>
int main(){
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		printf("Entered character is a vowel");
	}
	else{
		printf("Entered character is consonant");
	}
	return 0;
}
