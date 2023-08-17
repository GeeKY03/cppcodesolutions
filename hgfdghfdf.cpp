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
	list <int> l={4,5,4,1,3,2};



	// erase one or more element from a list 

	// NOTE: Unlike vector and arrays, Direct acess using indexes is not possilble in list 
	
	// Reason: Elements are not stored contigiously in the memory
	
	// auto it=l.begin();
	// it++;
	// it++;
	// l.erase(it);
	// // l.insert(it, 2);
	vector<int> *v;

	v=new vector<int> (5,0);

	for(auto x:*v){
		cout<<x<<" ";
	}
	cout<<endl;




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}