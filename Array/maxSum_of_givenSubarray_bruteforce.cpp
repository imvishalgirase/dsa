// time complexity is O(n^3)

#include <iostream>
using namespace std;
int PrintSubarray(int *arr, int n)
{
    int maxsum = INT8_MIN;//  "this are macros in preporcessor"   maxium minimum to infinity to hoga for that case we are writing therse

    int i;

    for (int start = 0; start <= n - 1; start++)
    {
        for (int end = start; end <= n - 1; end++)
        {
            int sum = 0;
            for (i = start; i <= end; i++)
            {
                sum += arr[i];
            }
            cout << sum << ",";

          maxsum=max(maxsum,sum);   // shrotcut for the finding max ;  for  there eleents maxsum=max(a,max(b,c)),   same for min
        }

        cout << endl;
    }
    cout << "max sum is==="<<maxsum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    PrintSubarray(arr, 5);
}