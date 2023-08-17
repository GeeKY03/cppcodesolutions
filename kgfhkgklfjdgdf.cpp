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
	string s;
	cin>>s;
	int flag=0;
	int n=s.size();
	for(int i=0;i<n;i++){
		if((s[i]=='d')&&(s[i+1]=='o')&&(s[i+2]=='t')&&(i==0)){
			cout<<"dot";
			i+=2;
		}
		else if((s[i]=='a')&&(s[i+1]=='t')&&(i==0)){
			cout<<"at";
			i++;
		}
		else if((s[i]=='a')&&(s[i+1]=='t')&&(i==n-2)){
			cout<<"at";
			i++;
		}
		else if((s[i]=='d')&&(s[i+1]=='o')&&(s[i+2]=='t')&&(i==n-3)){
			cout<<"dot";
			i+=2;
		}
		else if((s[i]=='d')&&(s[i+1]=='o')&&(s[i+2]=='t')){
			cout<<'.';
			i+=2;
		}
		else if(((s[i]=='a')&&(s[i+1]=='t')&&(flag==0))){
			cout<<"@";
			flag=1;
			i++;
		}
		else{
			cout<<s[i];
		}
	}

	return 0;
}