#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int romanToInt(string s) {
        int num=0;
        int len=s.size();
        for(int i=0;i<len;i++){
        	cout<<num<<endl;
            if(s[i]=='M'){
                num+=1000;
            }
            else if(s[i]=='D'){
                num+=500;
            }
            else if(s[i]=='C'){
                if(s[i+1]=='D'){
                    num+=400;
                    i++;
                }
                else if(s[i+1]=='M'){
                    num+=900;
                    i++;
                }
                else{
                    num+=100;
                }
            }
            else if(s[i]=='L'){
                num+=50;
            }
            else if(s[i]=='X'){
                if(s[i+1]=='L'){
                    num+=40;
                    i++;
                }
                else if(s[i+1]=='C'){
                    num+=90;
                    i++;
                }
                else{
                    num+=10;
                }
            }
            else if(s[i]=='V'){
                num+=5;
            }
            else if(s[i]=='I'){
                if(s[i+1]=='V'){
                    num+=4;
                    i++;
                }
                else if(s[i+1]=='X'){
                    num+=9;
                    i++;
                }
                else{
                    num+=1;
                }
            }
        }
        return num;
    }

int main(){
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	string s;
	cin>>s;
	ll ans=romanToInt(s);
	cout<<ans<<endl;





	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}