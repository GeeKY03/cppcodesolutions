#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	string array1[]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
	string array[n];
	if(n<26){
		cout<<"NO"<<endl;
	}
	else{
		for(int i=0;i<n;i++){
			if(s[i]<97){
				array[i]=array1[s[i]-65];
			}
			else{
				array[i]=s[i];
			}
		}
			    int x= sizeof(array)/sizeof(array[0]);
	    sort(array, array+x);
	    int count=1;
	    for(int j=0;j<n-1;j++){
		    if(array[j]==array[j+1]){
			    continue;
		    }
		    else{
			    count++;
		    }
	    }
	    		    if(count==26){
		    cout<<"YES"<<endl;
	        }
	        else{
		        cout<<"NO"<<endl;
	        }
    }
	return 0;
}