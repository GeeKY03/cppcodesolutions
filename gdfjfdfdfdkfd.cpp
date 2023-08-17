#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int arr[10]={6,2,5,5,4,5,6,3,7,6};
		int sum=a+b;
		int count=0;
		string s=to_string(sum);
		int n=s.size();
		int x=0;
		for(int i=0;i<n;i++){
			x=sum%10;
			count+=arr[x];
			sum=sum/10;
		}
		cout<<count<<endl;

	}
	return 0;
}