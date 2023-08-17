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
		int n;
		vlli v1;
		cin>>n;
		for(int i=0;i<n;i++){
			ll a;
			cin>>a;
			v1.pb(a);
		}
		sort(v1.begin(),v1.end());
		// for(auto x:v1){
		// 	cout<<x<<" ";
		// }
		// cout<<endl;

		int mid=((n-1)/2)+1;
		// cout<<mid<<endl;
		vlli v;
		for(int i=0;i<mid;i++){
			v.pb(v1[i]);
			v.pb(v1[i+mid]);
		}
		// 	for(auto x:v){
		// 	cout<<x<<" ";
		// }
		// cout<<endl;

		// int flag=0;
		// if((!(v[0]>v[1]))&&(!(v[0]>v[n-1]))){
		// 	flag=1;
		// }
		// else if ((!(v[0]<v[1]))&&(!(v[0]<v[n-1]))){
		// 	flag=1;
		// }
		// else{
		// 	for(int i=1;i<n-1;i++){
		// 		if((!(v[i]>v[i-1]))&&(!(v[i]>v[i+1]))){
		// 			flag=1;
		// 			break;
		// 		}
		// 		else if((!(v[i]<v[i-1]))&&(!(v[i]<v[i+1]))){
		// 			flag=1;
		// 			break;
		// 		}
		// 	}
		// }
		// if(flag==1){
		// 	cout<<"NO"<<endl;
		// }
		// else{
		// 	cout<<"YES"<<endl;
		// 	for(auto x:v){
		// 		cout<<x<<" ";
		// 	}
		// 	cout<<endl;
		// }

		int flag=0;
		if(v[0]>=v[n-1]){
			flag=1;
		}
		else if(n&1){
			flag=1;
		}
		else{
			for(int i=1;i<n-1;i++){
				if((v[i]>v[i+1])&&(v[i]>v[i-1])){
					continue;
				}
				else if((v[i]<v[i-1])&&(v[i]<v[i+1])){
					continue;
				}
				else{
					flag=1;
					break;
				}
			}
		}
		if(flag==1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
			for(auto x:v){
				cout<<x<<" ";
			}
			cout<<endl;
		}

	}



	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}