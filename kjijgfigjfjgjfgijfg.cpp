#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7]={3,2,1,0,1,2,3};
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }

    cout << "Max element Index: " << max_element(arr, arr + 7) - arr;
    cout<<endl;
    cout << "Min element Index: " << min_element(arr, arr + 7) - arr;

    return 0;
}