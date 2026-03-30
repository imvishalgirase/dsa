// largest sum of subaary leght k;

#include <iostream>
#include <vector>
using namespace std;

int maxSumOfSubarraylenghtK(vector<int> &arr, int k)
{
    // there will be two ends of any window
    int n = arr.size();
    int low = 0, high = 1; // as the k=2 therefore according to index it frist should go on 0->1;

    int sum = 0;
    for (int i = low; i <= high; i++)
    {
        sum += arr[i];
    }

    int res = 0;

    while (high < n) // high =n khtm
    {
        res = max(sum, res);
        low++; // shifting of window
        high++;

        if (high == n) // if high pass the window
        {
            break;
        }

        sum -= arr[low - 1]; // removing the prevoius low
        sum += arr[high];    // adding the new memmber
    }

    return res;
}

int main()
{
    vector<int> vector1 = {100, 200, 300, 400};
    int n = 4;
    int k = 2; // size of subarray
    cout << maxSumOfSubarraylenghtK(vector1, k);
}