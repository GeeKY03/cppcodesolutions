#include<iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;

  vector<vector<int>> substring(s1.size() + 1, vector<int>(s2.size() + 1, 0));

  for (int i = 1; i < s1.size() + 1; i++) {
    for (int j = 1; j < s2.size() + 1; j++) {
      if (s1[i - 1] == s2[j - 1]) {
        substring[i][j] = substring[i - 1][j - 1] + 1;
      } else {
        substring[i][j] = max(substring[i][j - 1], substring[i - 1][j]);
      }
    }
  }

  cout << substring[s1.size()][s2.size()];

  return 0;
}