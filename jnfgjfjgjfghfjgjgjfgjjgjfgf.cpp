#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int array[n];
		vector<int> v;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			num=array[i];
			v.push_back(num);
		}
		int num1=0;
		sort(v.begin(), v.end());
		for(int i=0;i<n;i++){
			if(v[i]==array[i]){
				num1++;
			}
		}
		cout<<"NUM"<<" "<<num1<<endl;
		if(num1==n){
			cout<<0<<endl;
		}
		else{
			int count=0;
			int countp=0;
			for(int i=1;i<=n;i++){
				for(int j=1;j<n;j++){
					if((i%2!=0)&&(j%2!=0)){
						if(array[j-1]>array[j]){
							swap(array[j-1], array[j]);
							count++;
						}
					}
					else if((i%2==0)&&(j%2==0)){
						if(array[j-1]>array[j]){
							swap(array[j-1], array[j]);
							count++;
						}
					}
				}
				if(count==countp){
					cout<<i<<endl;
					break;
				}
				else{
					countp=count;
					count=0;
				}
			}
		}
	}
	return 0;
}