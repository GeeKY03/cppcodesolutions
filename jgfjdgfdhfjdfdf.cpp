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
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	vi  a={1, 2, 4, 2, 1};
	rotate(a.begin(), a.begin()+1,a.begin()+4);
	for(auto x:a){
		cout<<x<< " ";
	}
	cout<<endl;
	rotate(a.begin(), a.begin()+1,a.begin()+2);
	for(auto x:a){
		cout<<x<< " ";
	}


	return 0;
}