#include<iostream>
using namespace std;
int main(){
	int n,num,rev=0;
	cout<<"Enter the number:"<<endl;
	cin>>n;

	while(n!=0){
		int r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(n==rev){
		cout<<"Entered number is palindrome."<<endl;
	}
	else {
		cout<<"Entered number is not palindrome."<<endl;
	}
	return 0;
}
