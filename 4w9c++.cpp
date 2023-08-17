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
	int n;
	scanf("%d",&n);
	vector<string> v;
	char arr[]="abcdefghijklmnopqrstuvwxyz";
	srand(time(0));
	for(int i=0;i<n;i++){
		string s;
		for(int j=0;j<5;j++){
		    char nm=arr[rand()%26];
		    s.pb(nm);
	    }
	    cout<<s<<endl;
	    v.pb(s);
	}
	cout<<endl;
	sort(v.begin(),v.end());
	cout<<"Strings in sorted order are: \n";
	for(auto x:v){
		cout<<x<<" ";
	}

	return 0;
}