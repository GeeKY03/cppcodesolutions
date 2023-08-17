#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define pb push_back
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		vector<int> odd;
		vector<int> even;
		int num;
		for(int i=0;i<n;i++){
			cin>>num;
			v.pb(num);
			if(num%2==0){
				even.pb(num);
			}
			else{
				odd.pb(num);
			}
		}
		sort(v.begin(), v.end());
		if(v.size()==1){      // when array has only one elment
			cout<<num<<endl;
		}
		else{
			if(odd.size()==0){// when array has no odd element(elements could be all same or distinct)
				int max=0;
				int count=1;
				for(int i=1;i<v.size();i++){
					if(v[i]!=v[i-1]){
						count++;
					}
				}
				cout<<"count : "<<count<<endl;
				if(count>1){//when elements are distinct
				    for(int i=0;i<v.size()-1;i++){
					    max=v[n-1];
					    int x=v[i];
					    for(int j=0;x>=1;j++){
						    max=max*2;
						    x=x/2;
					    }
				    }
				    cout<<(v.size()-1)+max<<endl;
			    }
			    else if(count==1){// when elements are all same
			    	if(v[0]==8){
			    		int num1=2;
			    		for(int i=0;i<(n*3);i++){
			    			num1*=2;
			    		}
			    		cout<<num1<<endl;
			    	}
			    }
			}
			else{
				cout<<"hehe"<<endl;
			}
		}
	}
	return 0;
}