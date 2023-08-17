#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	sort(array, array+n);
	vector <int> v;
	int count=1;
	for(int i=1;i<n;i++){
		if((i==n-1)&&(array[i]==array[i-1])){
			count++;
			v.push_back(count);
		}
		if(array[i]==array[i-1]){
			count++;
		}
		else{
			v.push_back(count);
			count=1;
		}
	}
	// for(int i=0;i<v.size();i++){
	// 	cout<<v[i]<<" ";
	// }
	sort(v.begin(), v.end(), greater<int>());
	cout<<n-v[0]<<endl;
	return 0;
}