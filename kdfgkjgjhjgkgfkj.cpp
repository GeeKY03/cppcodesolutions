//Program to demonstrate Recursive Binary exponentiation
#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;

int BinExpRecur(int a, int b){
	if(b==0){
		return 1;
	}
	long long res= BinExpRecur(a,b/2);
	if(b%2!=0){
		return (a* (res *res)%M)%M;
	}
	else{
		return ((res *res)%M);
	}
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<BinExpRecur(a,b);
	return 0;
}