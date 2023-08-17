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
	string s1,s2;
	cin>>s1>>s2;
	int len1=s1.size();
	int len2=s2.size();
	int arr1[26]={};
	int arr2[26]={};
	for(int i=0;i<len1;i++){
		arr1[s1[i]-'a']++;
	}
	for(int i=0;i<len2;i++){
		arr2[s2[i]-'a']++;
	}
	int flag=0;
	for(int i=0;i<26;i++){
		if(arr1[i]<arr2[i]){
			flag=1;
		}
	}
	if(flag==1){
		cout<<"need tree"<<endl;
	}
	else{
		if(len1==len2){
			cout<<"array"<<endl;
		}
		else{
			int ind=0;
			int flag1=0;
			for(int i=0;i<len1;i++){
				int count=0;
				if(s1[i]==s2[ind]){
					for(int j=i;j<len1;j++){
						if(s1[j]==s2[ind]){
							count++;
							ind++;
						}
					}
				}
				if(count==len2){
					flag1=1;
				}
			}
			if(flag1==1){
				cout<<"automaton"<<endl;
			}
			else{
				cout<<"both"<<endl;
			}
		}
	}

	return 0;
}