#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);




int main(){
	int n;
	cin>>n;
	vector<string> v;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		v.pb(s);
	}
	for(int i=0;i<n;i++){
		char str[9] ;
		for(int i=0)
		int n =strlen(str);
        for (int len = 1; len <= n; len++){
            for (int i = 0; i <= n - len; i++){
                int j = i + len - 1;
                for (int k = i; k <= j; k++)
                cout << str[k];
                cout << endl;
           }
        }
	}
    return 0;
}
