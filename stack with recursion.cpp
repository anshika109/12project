#include<iostream>
using namespace std;
	int factorial(int n){
		int temp;
		if(n<0)
		temp=-1;
		else if(n==0)
		temp=1;
		else
		temp=n*factorial(n-1);
		return temp;
	}
int main(){
	int n;
	cin>>n;
	int temp1;
	temp1=factorial(n);
    cout<<temp1;
}
