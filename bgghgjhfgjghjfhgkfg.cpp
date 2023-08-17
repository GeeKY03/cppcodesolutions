#include<bits/stdc++.h>
using namespace std;
int main(){
	long int t;
	cin>>t;
	while(t--){
		int n,m,rb,cb,rd,cd;
		cin>>n>>m>>rb>>cb>>rd>>cd;
		int dr=1;
		int dc=1;
		if((rb==rd)||(cb==cd)){
			cout<<0<<endl;
		}
		else{
		    for(int i=1;i<n*m;i++){    
			    if((rb==n)){
				    dr=-1;
			    }
			    if(cb==m){
				    dc=-1;
			    }
			    rb=rb+dr;
			    cb=cb+dc;
			    if((rb==rd)||(cb==cd)){
				    cout<<i<<endl;
				    break;
			    }
			    else{
				    continue;
			    }
		    }
		}
	}
	return 0;
}