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
		if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='y')){
			if(s[i]=='a'){
				cout<<'a';
				for(int j=i+1;j<n;j++){
					if(s[j]!='a'){
						i=j-1;
						break;
					}
					else if(j==n-1){
						i=j;
						break;
					}
				}
			}
			else if(s[i]=='y'){
				cout<<'y';
				for(int j=i+1;j<n;j++){
					if(s[j]!='y'){
						i=j-1;
						break;
					}
					else if(j==n-1){
						i=j;
						break;
					}
				}
			}
			else if(s[i]=='i'){
				cout<<'i';
				for(int j=i+1;j<n;j++){
					if(s[j]!='i'){
						i=j-1;
						break;
					}
					else if(j==n-1){
						i=j;
						break;
					}
				}
			}
			else if(s[i]=='u'){
				cout<<'u';
				for(int j=i+1;j<n;j++){
					if(s[j]!='u'){
						i=j-1;
						break;
					}
					else if(j==n-1){
						i=j;
						break;
					}
				}
			}
			else if(s[i]=='e'){
				int count=0;
				for(int j=i;j<n;j++){
					if(s[j]!='e'){
						i=j-1;
						break;
					}
					else if(s[j]=='e'){
						count++;
						if(j==n-1){
							i=j;
							break;
						}
					}
				}
				if(count==2){
					cout<<"ee";
				}
				else{
					cout<<'e';
				}
			}
			else if(s[i]=='o'){
				int count=0;
				for(int j=i;j<n;j++){
					if(s[j]!='o'){
						i=j-1;
						break;
					}
					else if(s[j]=='o'){
						count++;
						if(j==n-1){
							i=j;
							break;
						}
					}
				}
				if(count==2){
					cout<<"oo";
				}
				else{
					cout<<'o';
				}
			}
		}
		else{
			cout<<s[i];
		}
	}

	return 0;
}