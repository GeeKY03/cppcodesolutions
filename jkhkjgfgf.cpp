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
	int p1,p2,p3,p4;
	cin>>p1>>p2>>p3>>p4;
	int w=0;
	if(p1>=10){
		w++;
	}
	if(p2>=10){
		w++;
	}
	if(p3>=10){
		w++;
	}
	if(p4>=10){
		w++;
	}
	cout<<w<<endl;

	return 0;
}
