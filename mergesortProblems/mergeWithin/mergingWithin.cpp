#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void mergeWithin(vector<int> &arr) {
    /* 
     =========SHELL SORT============ 
     O( (M + N) * LOG( M + N ) ) 
    */
    int n = arr.size();
    int gap = ceil(n / 2);
    int left = 0, right = left + gap, fg = 0;
    if (gap == 1)
        fg++;
    while (gap >= 1) {
        left = 0;
        right = left + gap;

        while (left < n && right < n) {
            if (arr[left] > arr[right]) {
                swap(arr[left], arr[right]);
            }
            left++;
            right++;
        }
        gap = ceil(gap / 2);
        if (gap == 1 && fg == 1)
            break;
        else if (gap == 1 && fg == 0)
            fg++;
    }
    return;
}

int main() {
    vector<int> arr = {2, 5, 8, 10, 7, 8, 9, 12};

    mergeWithin(arr);
    for (const int &val : arr)
        cout << val << " ";

    /* 
    Since arr is almost sorted with we can apply insertion sort algo, which will give TC- O( n * m ) 
    n = sorted array part
    m = unsorted array part
    */
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }

    cout << endl;

    return 0;
}
