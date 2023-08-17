#include<iostream>
using namespace std;
 int main(){
 	long long int n,k;
 	cin>>n>>k;
 	if((k<=n/2)&&(n%2==0)){
 		cout<<(k*2)-1<<endl;
 	}
 	else if((k<=(n+1)/2)&&(n%2!=0)){
 		cout<<(k*2)-1<<endl;
 	}
 	if((k>n/2)&&(n%2==0)){
 		cout<<(k-(n/2))*2<<endl;
 	}
 	else if((k>(n+1)/2)&&(n%2!=0)){
 		cout<<(k-((n+1)/2))*2;
 	}
 	return 0;
 }