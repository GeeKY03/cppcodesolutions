#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int io = 0; io < t; io++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        sort(arr, arr + n);
        int max = arr[n - 1];
        int min = arr[0];
        int temp[max + 2];
        for (int h = 0; h <= max + 1; h++)
        {
            temp[h] = 0;
        }
        int ans;
        if (min == 0)
        {
            int count = 0;
            int ku = 0;
            int c = 0;
            int res = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > res)
                {
                    if (arr[i] > res + 1)
                    {
                        c = -1;
                        ku++;
                        temp[ku] = 0;
                        break;
                    }
                    else
                    {
                        ku++;
                        count = 1;
                        res = arr[i];
                        temp[ku] = count;
                    }
                }
                else
                {
                    count++;
                    temp[ku] = count;
                }
            }

            int cu = temp[0];
            int y = 0;
            int counter = 0;
            for (int l = 1; l <= ku + 1; l++)
            {
                if (cu == 0)
                {
                    break;
                }
                if (temp[l] > cu - 1)
                {
                    y = -1;
                    cu = cu - 1;
                    counter++;
                }
                else if (temp[l] == cu - 1)
                {
                    cu = cu - 1;
                    counter++;
                    if (temp[l + 1] < cu - 1)
                    {
                        y = -1;
                    }
                }
                else
                {
                    cu = temp[l];
                    counter++;
                    if (temp[l + 1] < cu - 1)
                    {
                        y = -1;
                    }
                }
            }
            if (y == -1 || c == -1)
            {
                ans = counter + 1;
            }
            else
            {
                ans = counter;
            }
        }
        else
        {
            ans = 1;
        }
        cout << ans << endl;
    }

    return 0;
}