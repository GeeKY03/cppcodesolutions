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
	int t;
	cin>>t;
	while(t--){
		int n;
		string s,t;
		cin>>n>>s>>t;
		ll count=0;
		int flag=0;
		for(int i=0;i<n;i++){
			if(s[i]==t[i]){
				count++;
			}
			else{
				if((s[i]=='a')&&(s[i+1]=='b')){
					swap(s[i],s[i+1]);
				}
				else if((s[i]=='b')&&(s[i+1]=='c')){
					swap(s[i],s[i+1]);
				}
				else if((s[i]=='a')&&(s[i+1]=='a')){
					for(int j=i;j<n;j++){
						if(s[j]=='b'){
							swap(s[i],s[j]);
							break;
						}
						else if((j==n-1)&&(j!='b')){
							flag=1;
							break;
						}
					}
				}
				else if((s[i]=='b')&&s[i+1]=='b'){
					for(int j=i;j<n;j++){
						if(s[j]=='a'){
							swap(s[i],s[j]);
							break;
						}
						else if((j==n-1)&&(j!='a')){
							flag=1;
							break;
						}
					}
				}
				else{
					flag=1;
					break;
				}
				i--;
			}
		}
		if(flag==1){
			cout<<"NO"<<endl;
		}
		else{
			if(s==t){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}