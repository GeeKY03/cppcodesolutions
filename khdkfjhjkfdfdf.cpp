#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	map<int,int> m={{1,0},{2,1}};
	// cout<<m[2]<<endl;
	// m.insert({8,7});
	m[8]=7;
	// for (auto x:m){
	// 	if(x.first==2){
	// 		cout<<x.first<< " "<<x.second<<endl;
	// 	}
	// }
	for(map<int,int>::iterator itr=m.begin(); itr!=m.end();itr++){
		// cout<<(*itr).first<<" "<<(*itr).second<<endl;
		cout<<itr->first<<" "<<itr->second<<endl;
	}

	return 0;
}