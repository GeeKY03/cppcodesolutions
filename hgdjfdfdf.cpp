#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);
int calc(int ax, int ay, int bx, int by, int cx, int cy) {
	int BAx = ax - bx;
	int BAy = ay - by;
	int BCx = cx - bx;
	int BCy = cy - by;
	return (BAx * BCy - BAy * BCx);
}


bool isConvex(vector<vector<int>>& points) {
	bool neg = false;
	bool pos = false;
	int n = points.size();
	for (int i = 0; i < n; i++) {
		int a = i;
		int b = (i + 1) % n;
		int c = (i + 2) % n;
		int crossProduct = calc(points[a][0], points[a][1], points[b][0], points[b][1], points[c][0], points[c][1]);
		if (crossProduct < 0) neg = true;
		else if (crossProduct > 0) pos = true;
		if (neg && pos) return false;
	}
	return true;
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int ax, ay, bx, by, cx, cy, dx, dy;
	cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;
	vector<vi> v = {{ax, ay}, {bx, by}, {cx, cy}, {dx, dy}};
	if (isConvex(v)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}



	return 0;
}