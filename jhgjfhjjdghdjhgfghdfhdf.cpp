#include<iostream>
using namespace std;
 int main(){
 	int t;
 	cin>>t;
 	while(t--){
 		string s;
 		cin>>s;
 		int r=0;
 		int g=0;
 		int b=0;
 		int R=0;
 		int G=0;
 		int B=0;
 		for(int i=0;i<6;i++){
 			if(s[i]=='r'){
 				r=i;
 			}
 			else if(s[i]=='g'){
 				g=i;
 			}
 			else if(s[i]=='b'){
 				b=i;
 			}
 			else if(s[i]=='R'){
 				R=i;
 			}
 			else if(s[i]=='G'){
 				G=i;
 			}
 			else if(s[i]=='B'){
 				B=i;
 			}
 		}
 		if((r<R)&&(g<G)&&(b<B)){
 			cout<<"YES"<<endl;
 		}
 		else{
 			cout<<"NO"<<endl;
 		}
 	}
 	return 0;
 }