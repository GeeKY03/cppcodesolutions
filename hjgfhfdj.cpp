#include <bits/stdc++.h>
using namespace std;
#define int long long

// Function to compare two arrays of strings
// and determine if one can be converted to the other
// by swapping characters within each string
void compareStringArrays()
{
    int n, k;
    cin >> n >> k;

    // Array of strings A
    vector<string> stringArrayA(n);

    // Array of characters frequencies for A
    vector<int> charFreqA(10, 0);

    // Read and populate stringArrayA and charFreqA
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        stringArrayA[i] = s;
        for (auto c : s)
        {
            charFreqA[c - '0']++;
        }
    }

    // Array of strings B
    vector<string> stringArrayB(n);

    // Array of characters frequencies for B
    vector<int> charFreqB(10, 0);

    // Read and populate stringArrayB and charFreqB
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        stringArrayB[i] = s;
        for (auto c : s)
        {
            charFreqB[c - '0']++;
        }
    }

    // Check if the strings in A and B have the same lengths
    for (int i = 0; i < n; i++)
    {
        if (stringArrayA[i].size() != stringArrayB[i].size())
        {
            cout << "NO" << endl;
            return;
        }
    }

    int swapsNeeded = 0, swapsAvailable = 0;

    // Calculate the number of swaps needed and available for each character
    for (int i = 0; i < 10; i++)
    {
        if (charFreqA[i] == charFreqB[i])
            continue;
        else if (charFreqA[i] < charFreqB[i])
        {
            swapsNeeded += (charFreqB[i] - charFreqA[i]);
        }
        else
        {
            swapsAvailable += abs(charFreqB[i] - charFreqA[i]);
        }
    }

    // Check if the number of swaps needed and available match
    if (swapsNeeded != swapsAvailable)
    {
        cout << "NO" << endl;
        return;
    }

    // Check if the number of swaps needed is less than or equal to k
    if (swapsNeeded <= k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}


int32_t main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        compareStringArrays();
    }
    return 0;
}