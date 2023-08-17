#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int left=0;
	int hrs=a;
	for(int i=0;(a/b)>0;i++){
		hrs=hrs+(a/b);
		left=left+(a%b);
		a=(a+(a%b))/b;
	}
	cout<<hrs<<endl;
	return 0;
}