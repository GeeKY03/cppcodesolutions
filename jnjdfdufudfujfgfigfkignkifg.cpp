#include<bits/stdc++.h>
using namespace std;
// #define ll long long int 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int odds=0,evens=0;
		vector<int> odd;
		vector<int> even;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			if(num%2==0){
				even.push_back(num);
				evens++;
			}
			else{
				odd.push_back(num);
				odds++;
			}
		}
		if(odds==0){
			cout<<"NO"<<endl;
		}
		else if((x%2==0)&&(evens==0)){
			cout<<"NO"<<endl;
		}
		else if((x==(odds+evens))&&(odds%2==0)){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}