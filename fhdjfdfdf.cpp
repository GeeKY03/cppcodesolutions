#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
  return a.first>b.first;
}
int main(){

  ios_base::sync_with_stdio(false);
   cin.tie(NULL); 
   freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

  int n, k;
  cin>>n>>k;
  vector<pair<int,int>> arr(n);
  for(int i = 0; i<n ;i++){ 
  	cin>>arr[i].first;
    arr[i].second = i+1;
  }
  sort(arr.begin(), arr.end(), cmp);
  cout<<arr[k-1].first<<endl;
  set<int> ans;
  for(int i = 0; i<k; i++) 
  	ans.insert(arr[i].second);
  for(auto it: ans){
    cout<<it<<" ";
  }
  return 0;
}