#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

// vector<int> &rot(vector<int> a,int i,int j){
// 	rotate(a.begin()+i+1,a.begin()+1,a.begin()+j);
// 	// return a;
// }

int main(){
	IOS
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	vi v={1 ,2 ,4, 2, 1};
	for(auto x:v){
		cout<<x<<" ";
	}
	cout<<endl;
	// rot(v,1,4);
	rotate(v.begin()+0,v.begin()+1,v.begin()+5);
	for(auto x:v){
		cout<<x<<" ";
	}

	return 0;
}