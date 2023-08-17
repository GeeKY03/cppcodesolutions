#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int num;
		cin>>num;
		long long int sum=0;
		for(int i=0;i<num;i++){
			int a;
			cin>>a;
			sum+=a;
		}
		if(sum%num==0){
			cout<<sum/num<<endl;
		}
		else{
			if((sum/num)*num<sum){
				cout<<(sum/num)+1<<endl;
			}
			else{
				cout<<sum/num<<endl;
			}
		}
	}
	return 0;
}