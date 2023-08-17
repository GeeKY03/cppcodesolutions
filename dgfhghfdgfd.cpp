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
	int k;
	string s;
	cin>>k>>s;
	int len = s.size();
	sort(s.begin(),s.end());
	int uniq =1;
	int count=1;
	// cout<<s<<endl;
	vi v;
	for(int i=1;i<len;i++){
		if(s[i]==s[i-1]){
			count++;
			if(i==len-1){
				// cout<<"count: "<<count<<endl;
				v.pb(count);
			}
		}
		else{
			// cout<<"count: "<<count<<endl;
			v.pb(count);
			count=1;
			uniq++;
		}
	}
	// cout<<uniq<<endl;
	int count1=0;
	for(int i=0;i<v.size();i++){
		if(v[i]%k==0){
			count1++;
		}
	}
	if((len==1)&&(k==1)){
		cout<<s<<endl;
	}
	else if(uniq>(len/k)){
		cout<<-1<<endl;
	}
	else if(count1!=uniq){
		cout<<-1<<endl;
	}
	else{
		for(int i=0;i<k;i++){
			for(int j=0;j<len;j+=k){
				cout<<s[j];
			}
		}
	}

	return 0;
}