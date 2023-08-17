#include<iostream>
using namespace std;
int main(){
	long long int s;
	long long int n;
	cin>>s;
	cin>>n;
	// cout<<s<<" "<<n<<endl;
    long long int won=0;
	for(long long int i=0;i<n;i++){
		long long int dsnum,dbnum;
		cin>>dsnum>>dbnum;
		cout<<dsnum<<" "<<dbnum<<endl;
		if(dsnum<s){
			s=s+dbnum;
			cout<<s<<endl;
			won++;
		}
		else{
			break;
		}
	}
	cout<<"WON="<<won<<endl;
	if(won==n){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}