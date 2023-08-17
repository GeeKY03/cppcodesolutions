#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'

// int candy(ratings, int) int {
//     left := make([]int, len(ratings)) 
//     right := make([]int, len(ratings))
    
// 	// children with a higher rating should get more candy than its left neighbor
//     left[0] = 1 // each child must have at least one candy.
//     for i:=1; i<len(ratings); i++ {
//         left[i] = 1 // each child must have at least one candy.
//         if ratings[i] > ratings[i-1] {
//             left[i] = left[i-1] + 1
//         }
//     }
    
// 	// children with a higher rating should get more candy than its right neighbor
//     right[len(ratings)-1] = 1  // each child must have at least one candy.
//     for i:=len(ratings)-2; i>=0; i-- {
//         right[i] = 1  // each child must have at least one candy.
//         if ratings[i] > ratings[i+1] {
//             right[i] = right[i+1] + 1
//         }
//     }
    
//     candies := 0
// 	// children should get maximum of candies calculated from left and right neighbour.
//     for i:=0; i<len(left); i++ {
//        candies += max(left[i], right[i])
//     }
    
//     return candies
// }

// int max(a, b int) int {
//     if a > b {
//         return a
//     }
//     return b
// }


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int n;
	cin>>n;
	string s;
	cin>>s;
	vi ratings(n,0);
	for(int i=0;i<n;i++){
		if(s[i]=='L'){
			ratings[i]++;
		}
		else{
			ratings[i+1]++;
		}
	}
	for(auto x:ratings){
		cout<<x<<endl;
	}



	return 0;
}