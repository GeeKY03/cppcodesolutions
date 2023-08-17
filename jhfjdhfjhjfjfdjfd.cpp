#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here

	// Kadane's algorithm for maximum subarray sum
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		array[i]=num;
	}
	// int sum=0;
	// int best=0;
	// for(int i=0;i<n;i++){
	// 	sum = max(v[i], sum+v[i]);
	// 	best= max(best, sum);
	// }
	// cout<<"The maximum subarray sum is = "<<best<<endl;
	// int sum=0;
	// int best=0;
	// for(int i=0;i<n;i++){
	// 	sum=max(v[i], sum+v[i]);
	// 	best=max(best, sum);
	// }
	// cout<<best<<endl;
	sort(array, array+n);
	for(int i=0;i<n;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	auto k=upper_bound(array, array+n, -45)-array;
	cout<<k<<endl;


	return 0;
}