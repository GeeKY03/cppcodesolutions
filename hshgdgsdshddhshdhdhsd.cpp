#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n%25==0){
			cout<<0<<endl;
		}
		else{
		// 	vector<int> v;
			string s=to_string(n);
			int len=s.size();
		// 	int count5=1;
		// 	int i5=0;
		// 	int count25=1;
		// 	for(int i=len-1;i>=0;i--){
		// 		if((s[i]=='5')&&(count5>0)){
		// 			i5=i;
		// 			count5--;
		// 			for(int j=i5-1;j>=0;j--){
		// 				if(((s[j]=='2')||(s[j]=='5'))&&(count25>0)){
		// 					v.push_back(i5-j-1);
		// 					count25--;
		// 					break;
		// 				}
		// 			}
		// 		}
		// 	}
		// 	int count0=1;
		// 	int i0=0;
		// 	for(int i=len-1;i>=0;i++){
		// 		if((s[i]=='0')&&(count0>0)){
		// 			i0=i;
		// 			count0--;
		// 			for(int j=i0-1;j>=0;j--){
		// 				if(s[j]=='5'){
		// 					v.push_back(i0-j-1);
		// 					break;
		// 				}
		// 			}
		// 		}
		// 	}
		// 	cout<<*min_element(v.begin(), v.end());
			vector<int> v5;
			int i0=0;
			int count=0;
			vector<int> v27;
			for(int i=len-1;i>=0;i--){
				if((s[i]=='0')&&(s[i-1]=='0')){
					cout<<len-1-i<<endl;
					break;
				}
				if((s[i]=='0')&&(s[i-1]=='5')){
					cout<<len-1-i<<endl;
					break;
				}
				if((s[i]=='0')&&(count==0)){
					i0=i;
				}
				if(s[i]=='5'){
					v5.push_back(i);
					count=1;
				}
				if((s[i]=='2')||(s[i]=='7')){
					if(count==1){
						v27.push_back(i);
					}
				}
			}
			vector<int> fin;
			if((i0>0)&&(v5.size()>0)){
				int num=*max_element(v5.begin(), v5.end());
				fin.push_back(((len-1-i0)-num)-1);
				cout<<"num= "<<num<<endl;
				cout<<(len-1-i0)+(i0-num-1)<<endl;
			}

		}
	}
	return 0;
}