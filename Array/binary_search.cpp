//problem ==     binary searh on array
// time complexity if logn



#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 4, 6, 7, 8, 9};
    int n = 6;
    int st = 0;
    int ed = n - 1;
    int key = 8;
    int mid;

    while (st <= ed)
    {
        mid = (st + ed) / 2;

        if (arr[mid] == key) //    HINT =   we only try to print the found  element when we get that on the mid , also we know after all braecking the whole array till a single mid and that is our key
        {
            cout << mid;
            return 0;
        }

        else if (key < arr[mid])
        {
            ed = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return -1;
}
