#include <bits/stdc++.h>

using namespace std;

void recursiveCall(vector<int> arr, int idx, vector<int> seq, int &len)
{
    int n = arr.size();
    int size = seq.size();
    if (idx >= n)
    {
        len = max(len, size);
        return;
    }
    for (int i = idx + 1; i < n; i++)
    {
        if (seq[size - 1] % 2 == 0 && arr[i] % 2 != 0)
        {
            seq.push_back(arr[i]);
            recursiveCall(arr, i, seq, len);
            seq.pop_back();
        }
        else if (seq[size - 1] % 2 != 0 && arr[i] % 2 == 0)
        {
            seq.push_back(arr[i]);
            recursiveCall(arr, i, seq, len);
            seq.pop_back();
        }
    }

    len = max(len, size);
    return;
}

int main()
{
    vector<int> arr = {1, 3, 5, 2, 4, 6};
    int n = arr.size();
    int len = 0;

    /*
    Find subsequence with alternate even odd values. Find the length of the longest subsequences.
    */

    for (int i = 0; i < n; i++)
    {
        vector<int> seq = {arr[i]};
        recursiveCall(arr, i, seq, len);
    }

    cout << len << endl;

    return 0;
}