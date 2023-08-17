#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int bs(string s, int l, int r, char x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (s[mid] == x)
            return mid;
        if (s[mid] > x)
            return bs(s, l, mid - 1, x);
        return bs(s, mid + 1, r, x);
    }
    return -1;
}

int main(){
	IOS
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	auto start1 = std::chrono::high_resolution_clock::now();
	int t;
	cin>>t;
	while(t--){
		int n;
		string s,t;
		cin>>n>>s>>t;
		for(int i=0;i<n;i++){
			if(s[i]!=t[i]){
				if((s[i]=='a')&&(s[i+1]=='b')){
					swap(s[i],s[i+1]);
				}
				else if((s[i]=='b')&&(s[i+1]=='c')){
					swap(s[i],s[i+1]);
				}
				else if((s[i]=='a')&&(s[i+1]=='a')){
					int posb=bs(s,i,n,'b');
					swap(s[i],s[posb]);
				}
				else if((s[i]=='b')&&s[i+1]=='b'){
					int posa=bs(s,i,n,'a');
					swap(s[i],s[posa]);
				}
				else if((s[i]=='b')&&s[i+1]=='b'){
					int posc=bs(s,i,n,'c');
					swap(s[i],s[posc]);
				}
				else{
					break;
				}
				i--;
			}
		}
		// if(flag==1){
		// 	cout<<"NO"<<endl;
		// }
		// else{
		// 	if(s==t){
		// 		cout<<"YES"<<endl;
		// 	}
		// 	else{
		// 		cout<<"NO"<<endl;
		// 	}
		// }
		if(s==t){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;

	return 0;
}