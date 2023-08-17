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
	int t;
	cin>>t;
	while(t--){
		int num;
		int n;
		cin>>n;
		int lo=1, hi=n;
		while(lo<=hi){
			int mid= (lo+hi)/2;
			cout<<"? "<<lo<<" "<<mid<<endl;
			cout<<flush;
			int count=0;
			for(int i=lo;i<=mid;i++){
				int a;
				cin>>a;
				if((a>=lo)&&(a<=mid)){
					count++;
				}
			}
			if(count&1){
				hi=mid-1;
				num=mid;
			}
			else{
				lo=mid+1;
			}
		}
		cout<<"! "<<num<<endl;
		cout<<flush;
	}


	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}