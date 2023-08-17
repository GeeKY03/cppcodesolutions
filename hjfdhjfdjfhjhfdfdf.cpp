#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int main(){
 	int n;
 	cin>>n;
 	vector<int> v;
 	for(int i=0;i<n;i++){
 		int num;
 		cin>>num;
 		v.push_back(num);
 	}
 	if(v.size()==1){
 		cout<<1<<" "<<1<<endl;
 	}
 	else{
 	    vector<int> vec;
 	    sort(v.begin(), v.end());
 	    int count=1;
 	    for(int i=1;i<v.size();i++){
 		    if(v[i]==v[i-1]){
 			    count++;    
 			    if(i==v.size()-1){
 				    vec.push_back(count);
 			    }
 		    }
 		    else{
 			    vec.push_back(count);
 			    count=1;
 		    }
 	    }
 	    sort(vec.begin(),vec.end());
 	    vector<int>::iterator itr;
 	    itr= unique(v.begin(),v.end());
 	    v.resize(distance(v.begin(),itr));
 	    cout<<vec[vec.size()-1]<<" "<<v.size()<<endl;
 	}
 	return 0;
 }