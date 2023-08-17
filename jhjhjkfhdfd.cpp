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
	vi v={2, 1, 4, 3, 2, 4};
	multiset<int> ms;
	ms.insert(2);
	ms.insert(1);
	// ms.insert(4);
	// ms.insert(3);
	// ms.insert(2);
	// ms.insert(4);
	auto si=ms.upper_bound(1);
	auto si2=ms.find(1);
	// cout<<*si<<endl;
	auto ei=ms.end();
	cout<<distance(si,ei)<<endl;
	cout<<distance(ms.begin(),si2)<<endl;
	// cout<<*si2+1<<endl;



	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}