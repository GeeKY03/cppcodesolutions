#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> odd;
		vector<int> even;
		long long int evens=0;
		long long int odds=0;
		for(int i=1;i<=n;i++){
			long long int num;
			cin>>num;
			if(num<0){
				num=num*(-1);
			}
			if(i%2==0){
				even.push_back(num);
				evens+=num;
			}
			else{
				odd.push_back(num);
				odds+=num;
			}
		}
		long long int oddminele=*min_element(odd.begin(), odd.end());
		int evenmaxele=*max_element(even.begin(), even.end());
		int num1=odds-evens;
		if(evenmaxele>oddminele){
			evens=evens-evenmaxele+oddminele;
			odds=odds-oddminele+evenmaxele;
		}
		cout<<odds-evens<<endl;
	}
	return 0;
}