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
	int n;
	string s;
	cin>>n;
	cin>>s;
	for(int i=0;i<n;i++){
		if((s[i]=='a')||(s[i]=='i')|| (s[i]=='u') ){
			if(s[i]=='a'){
				cout<<'a';
				for(int j=i+1;j<n;j++){
					if(s[i]!='a'){
						i=j-1;
						break;
					}
					else if(j==n-1){
						i=j;
					}
				}
			}
			else if(s[i]=='i'){
				cout<<'i';
				for(int j=i+1;j<n;j++){
					if(s[i]!='i'){
						i=j-1;
						break;
					}
					else if(j==n-1){
						i=j;
					}
				}
			}
			else if(s[i]=='u'){
				cout<<'u';
				for(int j=i+1;j<n;j++){
					if(s[i]!='u'){
						i=j-1;
						break;
					}
					else if(j==n-1){
						i=j;
					}
				}
			}
		}
		else if((s[i]=='e') || (s[i]=='o')){
			if(s[i]=='e'){
				int count=1;
				for(int j=i+1;j<n;j++){
					if(s[j]=='e'){
						count++;
					}
					else{
						i=j-1;
						break;
					}
				}
				if(count>2){
					cout<<'e';
				}
				else if(count==2){
					cout<<"oo";
				}
				else{
					cout<<'o';
				}
			}
			else if(s[i]=='o'){
				cout<<'.';
			}
		}
		else{
			cout<<s[i];
		}
	}

	return 0;
}