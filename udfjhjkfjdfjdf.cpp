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
	string str1, str2;
    cin>>str1>>str2;

    vector<vector<int>>substr(str1.size()+1,vector<int>(str2.size()+1,0));

    for(int i=1; i<str1.size()+1; i++){
        for(int j=1; j<str2.size()+1; j++){
            if(str1[i-1]==str2[j-1]){
                substr[i][j]=substr[i-1][j-1]+1;
            } 
            else{
                substr[i][j]=max(substr[i][j-1],substr[i-1][j]);
            }
        }
    }
    cout<<substr[str1.size()][str2.size()];
	return 0;
}