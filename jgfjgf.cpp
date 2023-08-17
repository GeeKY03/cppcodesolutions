#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a=n;
	for(int i=0;i<n;i++){
		for(int j=0;j<a;j++){
			cout<<"* ";
		}
		a--;
		cout<<" "<<endl;
	}
	return 0;
}