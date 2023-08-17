#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,pos=1;
	cin>>t;
	while(t--){
	    int n,x,c=0;
	    cin>>n;
	    vector <int> v;
	    for(int i=0;i<n;i++){
	        cin>>x;
	        v.push_back(x);
	    }
	    for(int i=0;i<n;i++){
	        while(v[i]!= (i+1)){
	            swap(v[i],v[v[i]-1]);
	            c++;
	        }
	        
	    }
	        cout<<"Case "<<pos<<": "<<c<<endl;
	        pos+=1;
	  v.clear();  
	}
	return 0;
}