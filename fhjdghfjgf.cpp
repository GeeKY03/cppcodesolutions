#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int countPairs(const vector<int>& a, const vector<int>& b) {
    int n = a.size();
    int count = 0;
    unordered_map<int, int> sumDict;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int product = a[i] * a[j];

            if (sumDict.count(product)) {
                count += sumDict[product];
            }

            int sum = b[i] + b[j];
            sumDict[sum]++;
        }
    }

    return count;
}

int main() {
    // Example usage
    vector<int> a = {2, 3, 2};
    vector<int> b = {3, 3, 1};

    int pairsCount = countPairs(a, b);
    cout << "Number of pairs: " << pairsCount << endl;

    return 0;
}
