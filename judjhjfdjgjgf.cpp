#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			v.push_back(num);
		}
		int height=1;
		int count=0;
		for(int i=0;i<n;i++){
			if(i==n-1){
				if((v[i]==1)&&(v[i-1]==1)){
					height=height+5;
				}
				else if((v[i]==1)&&(v[i-1]==0)){
					height++;
				}
			}
			else if((v[i]==0)&&(v[i+1]==0)){
				count++;
				i++;
			}
			else if((v[i]==1)&&(v[i-1]==1)){
				height=height+5;
			}
			else if((v[i]==1)){
				height++;
			}
			else if(v[i]==0){
				continue;
			}
		}
		if(count>=1){
			cout<<-1<<endl;
		}
		else{
			cout<<height<<endl;
		}
	}
	return 0;
}