#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
//  chat gpts code

void countsort(int *arr, int n)
{
    int minVal = INT_MAX, maxVal = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    int range = maxVal - minVal + 1;
    int *freq = new int[range](); // initialize with 0

    for (int i = 0; i < n; i++)
    {
        freq[arr[i] - minVal]++;
    }

    for (int i = 0, j = 0; i < range; i++)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i + minVal;
            freq[i]--;
        }
    }

    delete[] freq; // free memory
}

int main()
{
    int arr[] = {2, 3, 1, 4, 5};
    int n = 5;
    countsort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
