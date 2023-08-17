#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int main(){
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int n;
	vi v1,v2;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v1.pb(x);
	}
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v2.pb(x);
	}
	vlli v3;
	for(int i=0;i<n;i++){
		ll num=0;
		for(int j=0;j<=i;j++){
			if(v1[j]-v2[i]>=0){
				num+=v1[j]-v2[i];
				v1[j]-=v2[i];
			}
			else if(v1[j]-v2[i]<0){
				num+=v1[j];
				v1[j]=0;
			}
			else{
				num+=0;
			}

		}
		v3.pb(num);
	}
	for(auto x:v3){
		cout<<x<<" ";
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}