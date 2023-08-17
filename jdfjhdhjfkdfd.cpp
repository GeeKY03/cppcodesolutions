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
	cin>>n;
	ll sum=0;
	int flag=0;
	for(int i=0;i<n;i++){
		int dist;
		string s;
		cin>>dist>>s;
		if(i==0){
			if(s!="South"){
				flag=1;
			}
			else{
				sum+=dist;
			}
		}
		else{
			if(sum==0){
				if(s!="South"){
					flag=1;
				}
				else{
					sum+=dist;
				}
			}
			else if(sum==20000){
				if(s!="North"){
					flag=1;
				}
				else{
					sum-=dist;
				}
			}
			else if(s=="North"){
				sum-=dist;
			}
			else if(s=="South"){
				sum-=dist;
			}
		}
	}
	if(sum!=0){
		flag=1;
	}
	(flag)?cout<<"NO"<<endl:cout<<"YES"<<endl;




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}