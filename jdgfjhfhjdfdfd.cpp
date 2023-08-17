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
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	string s;
	int k;
	cin>>s>>k;
	    string s1=s;
	    sort(s1.begin(),s1.end());
	    int count=0;
	    string str;
	    int n=s.length();
	    vector<int> v;
	    int ind=0;
	    for(int i=0;i<k;i++){
	    	str.pb(s1[i]);
	    }
	    for(int i=0;i<n;i++){
	    	if(s[i]==s1[count]){
	    		s[i]='0';
	    		ind =i;
	    		count++;
	    		i=0;
	    	}
	    	if(count==k){
	    		break;
	    	}
	    }
	    // cout<<s<<endl;
	    for(int i=ind+1;i<n;i++){
	    	if(s[i]!='0'){
	    		str.pb(s[i]);
	    	}
	    }
	    // cout<<str<<endl;
	    for(int i=0;i<ind;i++){
	    	if(s[i]!='0'){
	    		str.pb(s[i]);
	    	}
	    }
	cout<<str<<endl;



	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}