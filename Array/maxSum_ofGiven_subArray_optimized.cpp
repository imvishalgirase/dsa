// time complexity is O(n^2)

/*
in this  code we have tred to reduce the time complextiy from n^3 to n^2 by  removing  the for loop with i. on place of that we have makea sum at the just after the
start,it will take all the start and end value enach time and add until each end in the loop of end pointer. and we will add each time it will iceae like 0+1=1
,then 1+2=3,3_4=7...and many  more this is just for start=0 , it will workforstart0 to n-1...

*/

#include <iostream>
using namespace std;
int PrintSubarray(int *arr, int n)
{
    int maxsum = INT8_MIN;//  "this are macros in preporcessor"   maxium minimum to infinity to hoga for that case we are writing therse

    int i;

    for (int start = 0; start <= n - 1; start++)
    {
        int sum = 0;
        for (int end = start; end <= n - 1; end++)
        {
            sum += arr[end];
            maxsum=max(maxsum,sum);   // shrotcut for the finding max ;  for  there eleents maxsum=max(a,max(b,c)),   same for min
        }

        
    }
    cout << "max sum is==="<<maxsum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    PrintSubarray(arr, 5);
}


