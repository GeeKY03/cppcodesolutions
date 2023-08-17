#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define INF 1e18
#define fo(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define Fo(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
typedef pair<int, int> pi;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int main()
{
  IOS
  ll test = 1;
  cin >> test;
  while (test--)
  {
    //your code goes here
    string a, b;
    cin >> a >> b;
    if (a.size() != b.size()) {
      int p = int(b[0]) - 48;
      int q = 9 * (b.size() - 1);
      cout << p + q << endl;
    }
    else {
      int ans = 0;
      int p = a.size() - 1;
      for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
          ans += (int(b[i]) - 48) - (int(a[i]) - 48);
          p = i;
          break;
        }
      }
      int y = a.size() - (p + 1);
      int u = 9 * y;
      ans += u;
      cout << ans << endl;
    }
  }
  return 0;
}

