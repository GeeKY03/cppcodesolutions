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
	string num;
	cin>>num;
	int call=0;
	int len =num.size();
	for(int i=0;i<len;i++){
		int count=num[i]-48;
		int c=0;
		cout<<count<<" ";
		for(int j=0;j<len;j++){
			if(num[j]-48==i){
				c++;
			}
		}
		cout<<c<<endl;
		// if(c==count){
		// 	call++;
		// }
	}
	// cout<<call<<endl;

	return 0;
}
