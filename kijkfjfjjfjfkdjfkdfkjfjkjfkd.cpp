#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);


	int n;
	int k;
	cin>>n>>k;
	int sum=0;
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		if(num>=(k*3)){
			sum+=num-(k*3);
		}
		else{
			sum+=num%k;
		}
	}
	cout<<sum<<endl;

	return 0;
}