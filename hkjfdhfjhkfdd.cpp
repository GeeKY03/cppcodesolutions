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
	int a,b,c;
	cin>>a>>b>>c;
	long double x= sqrt((b*b)-(4*a*c));
	long double y= ((b+x)*-1)/(2*a);
	long double z= (x-b)/(2*a);
	if(y>z){
		cout<<fixed<<setprecision(8)<<y<<endl;
		cout<<fixed<<setprecision(8)<<z<<endl;
	}
	else{
		cout<<fixed<<setprecision(8)<<z<<endl;
		cout<<fixed<<setprecision(8)<<y<<endl;
	}
	return 0;
}