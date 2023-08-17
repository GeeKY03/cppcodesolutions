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
	int n,k;
	cin>>n>>k;
	ll pos=0;
	for(int i=0;i<=k;i++){
		if(i==0){
			pos+=1;
		}
		else if(i==1){
			pos+=0;
		}
		else if(i==2){
			ll a=n*(n-1)/2;
			pos+=a;
		}
		else if(i==3){
			ll a=n*(n-1)*(n-2);
			a/=6;
			pos+=a*2;
		}
	}
	if(k==4){
		ll b=n*(n-1)*(n-2);
		b=b*(n-3)/24;
		cout<<(b*9)+pos<<endl;
	}
	else{
		cout<<pos<<endl;
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}