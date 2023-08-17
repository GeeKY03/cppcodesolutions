#include<bits/stdc++.h>
using namespace std;

int Binexprecur(int a, int b){
	if(b==0){
		return 1;
	}
	else{
		long long res= Binexprecur(a,b/2);
		if(b%2!=0){
			return a*res*res;
		}
		else{
			return res*res;
		}
	}
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<Binexprecur(a,b)<<endl;
	return 0;
}