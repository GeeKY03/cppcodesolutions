#include <iostream>
#include<string>
using namespace std;
int main(){
	int q;
	cin>>q;
	for(int k=0;k<q;k++){
		long long int a,b;
		cin>>a>>b;
		for(int h=a;h<=b;h++){
	    int bn[32];
	    int i = 0;
	    string s;
	    while (h > 0) {
		    bn[i] = h % 2;
		    h = h / 2;
		    i++;
	    }
	    for (int j = i - 1; j >= 0; j--){
		    s=s+ to_string(bn[j]);
	    }
	    cout<<s<<endl;
	    long long int len= s.length();
	    long long int count=0;
	    for(long long int l=len-1;l>=0;l++){
		    if(s[l]==48){
			count++;
		    }
		    else{
			    break;
		    }
	        long long int number=0;
	            if(count==2){
	    	        number++;
		        }
	    }
	    }
    }
	return 0;
}