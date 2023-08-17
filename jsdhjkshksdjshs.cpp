#include <bits/stdc++.h>
#define pb push_back
#define sz(v) v.size()
using namespace std;
vector<string> v[80000];
map<string,int> data;
int main() {
 int n;
 cin>>n;

 for(int i=0;i<n;i++){
  string s;
  cin>>s;
  set<string> cek;

  for(int j=1;j<10;j++){

    for(int k=0;k<9-j+1;k++){

    string z;

    for(int l=k;l<k+j;l++){

     z.pb(s[l]);
    }

    if(cek.count(z)==0){
     data[z]++;
     v[i].pb(z);
     cek.insert(z);
    }
   }
  }
 }
 for(int i=0;i<n;i++){
  int kk=sz(v[i]);
  // loop(j,0,kk){
  for(int j=0;j<kk;j++){
   if(data[v[i][j]]==1){
    cout<<v[i][j]<<"\n";
    break;
   }
  }
 }
}