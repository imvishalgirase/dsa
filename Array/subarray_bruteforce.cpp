// problem = print all the total subarray
// number of subarray for any n lentgh array is (n*(n+1))/2  means sum of n natural number

// hint see :-- for each subarray there is an start and end , try to write the simple subarrya using pen nadnoetbook then we can conclude the logic
  
#include <iostream>
using namespace std;

int printSubarray(int *arr, int n)
{

    for (int start = 0; start < n - 1; start++)
    {
        for (int end = start; end < n - 1; end++)
        {
            // cout<<"("<< start<<","<<end<<")";

            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << ",";
        }
        cout << endl;
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    cout << printSubarray(arr, 6);
}

