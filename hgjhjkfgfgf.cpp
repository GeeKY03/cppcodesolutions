typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound

vector < int > binaryQueries(int n, vector < int > & a, int q, vector < vector < int >> & queries) {
  // Write your code here.
  int n = queries.size();
  vi final_res;
  for (int i = 0; i < n; i++) {
    // int weight=query[2];
    // int up=query[0];
    // int down=query[1];
    // for(int j=up;j<=down;j++){
    //   a[j]^=x;
    // }
    int restemp = a[up];
    for (int j = up + 1; j <= down; j++) {
      restemp |= a[j];
    }
    final_res.push_back(orResult);
  }
  return final_res;
}