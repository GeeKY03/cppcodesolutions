#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int len =s.length();
	string s1;
	string s2;
	for(int j=0;j<len;j++){
	    for(int i=0;i<len;i++){    
		    if(s[i]==s[i+1]){
			    i++;
			    continue;
		    }
		    // else if((i>0)&&(s[i]==s[i-1])){
		    // 	continue;
		    // }
		    else{
			    s1=s1+s[i];
		    }
	    }
	    s2==s1;
	    if(s==s1){
	    	cout<<s<<endl;
	    }
	    else if(s1==""){
	    	cout<<"Empty string"<<endl;
	    }
	    else if(s2==s1){
	    	cout<<s1<<endl;
	    }
    }
	return 0;
}