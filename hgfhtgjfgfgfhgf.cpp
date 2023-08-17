#include<vector>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	// vector<int> v={1,65,55,1,5,91,54,5,5,1,85,58,14,45,78,44,54,5,4,15,151,44,5};
	vector<int> v={1,65,55,1,5,91,54,5,5,1,85,58,14,45,78,44,54,5,4,15,151,44,5};
	// vector<int> v(array, array+23);
	// for(int i=0;i<v.size();i++){
	// 	cout<<v[i]<<" ";
	// }
	sort(v.begin(), v.end());
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	vector<int>::iterator itt;
	int itt= upper_bound(v.begin(),v.end(),14);
	int index= itt-v.begin();
	cout<<v[index]<<endl;
	// To delete an elment from back of an array pop_back();
	// v.pop_back();
	// appending an element at the end of an vector
	// v.push_back(100);
	//inserting an element at the front of a vector
	// v.insert(v.begin(),{-3,-2,-1,0});
	// Removing an element from the front of a vector
	// v.erase(v.begin()+(v.size()-1));
	// Clear() erases all the values stored in the vector
	// v.clear();
	// cout<<v[0]<<endl;
	// cout<<v.front()<<endl;
	// cout<<v[v.size()-1]<<endl;
	// cout<<v.back()<<endl;
	// v.resize(9);

	// Function that checks whether the vector is empty or not
	//empty() return a boolean output
	// cout<<v.empty()<<endl;
	// v.clear();
	// cout<<v.empty()<<endl;

	// vector<int>::iterator itr;
	// itr= v.begin()+2;
	// v.resize(v.size());
	// itr= v.end()-1;
	// cout<<&itr<<endl;

	// for(int i=0;i<v.size();i++){
	// 	cout<<v[i]<<" ";
	// }
	// v.resize(10);
	return 0;
}