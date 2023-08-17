#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class FastReader {
	    istream& in;
	    stringstream ss;
	    string word;
	   
public:
	    FastReader(istream& input) : in(input) {}
	   
	    string next() {
		        while (ss >> word || (ss.clear(), in >> word))
			            return word;
		        return "";
		   
	}
	   
	    int nextInt() {
		        return stoi(next());
		   
	}
	   
	    long long nextLong() {
		        return stoll(next());
		   
	}
	   
	    double nextDouble() {
		        return stod(next());
		   
	}
	   
	    string nextLine() {
		        string line;
		        getline(in, line);
		        return line;
		   
	}
};

void solve(FastReader& fr) {
	    int n = fr.nextInt();
	    vector<int> a(n);
	    int one = -1, two = -1;
	    int maxIndex = -1;
	   
	    for (int i = 0; i < n; i++) {
		        a[i] = fr.nextInt();
		       
		        if (a[i] == 1)
			            one = i;
		        else if (a[i] == 2)
			            two = i;
		        else if (n == a[i])
			            maxIndex = i;
		   
	}
	   
	    if ((one < maxIndex && maxIndex < two) || (two < maxIndex && maxIndex < one)) {
		        cout << (one + 1) << " " << (two + 1) << endl;
		        return;
		   
	} else {
		        if (maxIndex > one && maxIndex > two) {
			            cout << (maxIndex + 1) << " " << (1 + max(one, two)) << endl;
			       
		} else {
			            cout << (maxIndex + 1) << " " << (1 + min(one, two)) << endl;
			       
		}
		   
	}
}

int main() {
	    ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
	   
	    int tc;
	    cin >> tc;
	   
	    while (tc-- > 0) {
		 FastReader fr(cin);
		 solve(fr);
		   
	}
	   
	    return 0;
}