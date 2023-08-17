#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

bool cmp(pair<int,int> a, pair<int,int> b){
  return a.first>b.first;
}

int main(){
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int n,k;
	cin>>n>>k;
	vector<pair<int,int>> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i].first;
		arr[i].second=i+1;
	}
	sort(arr.begin(), arr.end(), cmp);
	cout<<arr[k-1].first<<endl;
	set<int> ans;
  for(int i = 0; i<k; i++) 
  	ans.insert(arr[i].second);
  for(auto it: ans){
    cout<<it<<" ";
  }




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}