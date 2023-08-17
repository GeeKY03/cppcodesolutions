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
    int t;
    cin>>t;
 
    while(t--){
       int n;
       cin>>n;
       string s;
       cin>>s;
       vector<int> arr(26,0);
       for(int i=0;i<n;i++){
            arr[s[i]-'a']++;
       }
       char ch;
       for(int i=0;i<26;i++){
            if(arr[i]!=0){
                ch='a'+i;
                break;
            }
       }
 
        vector<int> index;
        for(int i=0;i<n;i++){
            if(s[i]==ch){
                index.push_back(i);
            }
        }
        vector<pair<string,int> > v;
        int nn=index.size();
        for(int i=0;i<nn;i++){
            string ss="";
            int ii=index[i];
            if((n-ii)%2==0){
                 ss+=(s.substr(ii));
                 ss+=(s.substr(0,ii));
            }
            else{
                ss+=(s.substr(ii));
                string s1="";
                s1+=(s.substr(0,ii));
                reverse(s1.begin(),s1.end());
                ss+=s1;
            }
            v.push_back(make_pair(ss,ii));
        }
        sort(v.begin(),v.end());
        cout<<v[0].first<<endl;
        cout<<v[0].second+1<<endl;
    }
    return 0;
}