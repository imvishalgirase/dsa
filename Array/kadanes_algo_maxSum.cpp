#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int maxsum = INT8_MIN;

    int cursum = 0;
    for (int i = 0; i <= n - 1; i++)
    {

        cursum += arr[i];

        maxsum = max(maxsum, cursum);

        if (cursum < 0)
        {
            cursum = 0;
        }
    }
    cout << maxsum;
}