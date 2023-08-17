#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int main(){
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin>>t;
	while(t--){
		string s;
		int x;
		cin>>s;
		cin>>x;
		int hr=(s[0]-48)*10+(s[1]-48);
		int min=(s[3]-48)*10+s[4]-48;
		// cout<<hr<<":"<<min<<endl;
		int xhr=x/60;
		int xmin=x%60;
		// cout<<xhr<<" "<<xmin<<endl;
		set<string> sett;
		string s1=s;
		reverse(s1.begin(),s1.end());
		string s2=s1;
		int count=0;
		
		for(int i=0;i<1440;i++){
			hr=(hr+xhr)%24;
			if(min+xmin>=60){
				hr=(hr+1)%24;
				min=(min+xmin)%60;
			}
			else{
				min=(min+xmin)%60;
			}
			string hr1;
			string min1=to_string(min);
			if(hr<10){
				hr1='0'+to_string(hr)+':';
			}
			else{
				hr1=to_string(hr)+':';
			}
			if(min<10){
				min1='0'+to_string(min);
			}
			else{
				min1=to_string(min);
			}
			string time=hr1+":"+min1;
			sett.insert(time);
		}
		for(auto x:sett){
			string str1=x;
			string str2=str1;
			reverse(str2.begin(),str2.end());
			if(str2==str1){
				// cout<<str1<<endl;
				count++;
			}
		}
		cout<<count<<endl;
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}