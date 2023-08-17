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
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		ll one=0;
		int arr[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				char x;
				cin>>x;
				arr[i][j]=x-48;
				// cout<<arr[i][j]<<" ";
				if(x-48==1){
					one++;
				}
			}
			// cout<<endl;
		}
		ll ctr2=0;
		for(int i=n-2;i<n;i++){
			for(int j=0;j<m;j++){
				if(arr[i][j]==1){
					ctr2++;
				}
			}
		}
		ll three=0;
		ll two=0;
		ll onee=0;
		ll zero=0;
		for(int i=0;i<2;i++){
			for(int j=0;j<m;j++){
				if(arr[i][j]==0){
					if(j==0){
						//t1
					if((arr[i+1][j]==0)&&(arr[i+1][j+1]==0)){
						three++;
					}
					else if((arr[i+1][j]==0)||(arr[i+1][j+1]==0)){
						two++;
					}
					else{
						one++;
					}
					//t2
					if((arr[i][j+1]==0)&&(arr[i+1][j+1]==0)){
						three++;
					}
					else if(((arr[i][j+1]==0)||(arr[i+1][j+1]==0))){
						two++;
					}
					else{
						one++;
					}
					//t4
					if((arr[i][j+1]==0)&&(arr[i+1][j]==0)){
						three++;
					}
					else if((arr[i][j+1]==0)||(arr[i+1][j]==0)){
						two++;
					}
					else{
						one++;
					}
					}
					else if(j==m-1){
						if(((arr[i][j-1]==0)&&(arr[i+1][j]==0))){
						three++;
					}
					else if(((arr[i][j-1]==0)||(arr[i+1][j]==0))){
						two++;
					}
					else{
						one++;
					}/////////
					if((arr[i][j-1]==0)&&(arr[i+1][j]==0)){
						three++;
					}
					else if((arr[i][j-1]==0)||(arr[i+1][j]==0)){
						two++;
					}
					else{
						one++;
					}
					}
					else{
						//t1
					if((arr[i+1][j]==0)&&(arr[i+1][j+1]==0)){
						three++;
					}
					else if((arr[i+1][j]==0)||(arr[i+1][j+1]==0)){
						two++;
					}
					else{
						one++;
					}
					//t2
					if((arr[i][j+1]==0)&&(arr[i+1][j+1]==0)){
						three++;
					}
					else if(((arr[i][j+1]==0)||(arr[i+1][j+1]==0))){
						two++;
					}
					else{
						one++;
					}
					//t4
					if((arr[i][j+1]==0)&&(arr[i+1][j]==0)){
						three++;
					}
					else if((arr[i][j+1]==0)||(arr[i+1][j]==0)){
						two++;
					}
					else{
						one++;
					}
					//t3
					if(((arr[i][j-1]==0)&&(arr[i+1][j]==0))){
						three++;
					}
					else if(((arr[i][j-1]==0)||(arr[i+1][j]==0))){
						two++;
					}
					else{
						one++;
					}
					}
				}
			}
		}
		// cout<<one<<endl;
		if(three>0){
			cout<<one<<endl;
		}
		else if(two>0){
			cout<<one<<endl;
		}
		else if(one>0){
			cout<<one-1<<endl;
		}
		else{
			cout<<one-2<<endl;
		}

	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}