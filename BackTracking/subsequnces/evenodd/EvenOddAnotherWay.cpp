#include <bits/stdc++.h>

using namespace std;

int recursiveCall(vector<int> arr, int idx, int prev, int &len, int start)
{
    int n = arr.size();
    if (idx >= n)
    {
        return len;
    }
    for (int i = idx + 1; i < n; i++)
    {
        if ((arr[prev] % 2 == 0 && arr[i] % 2 != 0) || (arr[prev] % 2 != 0 && arr[i] % 2 == 0))
        {
            len++ ;
            recursiveCall(arr, i, idx, len, start);
            len-- ;
        }
    }

    return len;
}

int main()
{
    /*
    Find subsequence with alternate even odd values. Find the length of the longest subsequences.
    */
    vector<int> arr = {1, 3, 5, 2, 4, 6};
    int n = arr.size(), len = 0, index = 0, prev = 0, start = 0;

    for (int i = 0; i < n; i++)
    {
        int len = 1 ;
        recursiveCall(arr, i, prev, len, i);
    }

    cout << len << endl;

    return 0;
}