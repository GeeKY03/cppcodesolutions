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
	long double a=pow((1+sqrt(5)),1000000);
	long double b=pow((1-sqrt(5)),1000000);
	long double c=pow(2,1000000)*(sqrt(5));
	cout<<(a-b)/c<<endl;

	return 0;
}