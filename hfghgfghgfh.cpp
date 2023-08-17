#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int rot;
	cin>>rot;
	string arrs[]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
	string arrl[]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
	for(int i=0;i<n;i++){
		if((s[i]>64)&&(s[i]<91)){
			int a=(s[i]-65)+rot;
			if(a>25){
				a=a%26;
				cout<<arrl[a];
			}
			else{
				cout<<arrl[a];
			}

		}
		else if((s[i]>96)&&(s[i]<123)){
			int b=(s[i]-97)+rot;
			if(b>25){
				b=b%26;
				cout<<arrs[b];
			}
			else{
				cout<<arrs[b]
			}
		}
		else{
			cout<<s[i];
		}
	}
	return 0;
}