#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int px, py;
		string s;
		cin>>px>>py;
		cin>>s;
		int up=0;
		int down=0;
		int left=0;
		int right=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='U'){
				up++;
			}
			else if(s[i]=='D'){
				down++;
			}
			else if(s[i]=='L'){
				left++;
			}
			else if(s[i]=='R'){
				right++;
			}
		}
		// cout<<up<<" "<<down<<" "<<left<<" "<<right<<endl;
		int counter=0;
		if((px>=0)&&(right>=px)){
			counter++;
		}
		if(px<0){
			px=px*(-1);
			if(left>=px){
				counter++;
			}
		}
		if((py>=0)&&(up>=py)){
			counter++;
		}
		if(py<0){
			py=py*(-1);
			if(down>=py){
				counter++;
			}
		}
		if(counter==2){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}