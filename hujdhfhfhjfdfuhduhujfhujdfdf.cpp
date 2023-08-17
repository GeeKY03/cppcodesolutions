#include<bits/stdc++.h>
using namespace std;
int main(){
	char rook;
	int rookp;
	char knight;
	int knightp;
	cin>>rook>>rookp>>knight>>knightp;
	// cout<<rook<<rookp<<'\n';
	// cout<<knight<<knightp<<'\n';
	// vector<string> v;
	int count=0;
	string ref="abcdefgh";
	if(knight =='a'){
		if((knightp>2)&&(knightp<7)){
			if((knightp+2)!=rookp){
				count++;
			}
			else if((knightp-2)!=rookp){
				count++;
			}
		}
		if()
	}
	return 0;
}