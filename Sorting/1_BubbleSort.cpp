#include <iostream>
#include <algorithm> //   just to use the swap function
using namespace std;

void bubso(int *arr, int n)
{

    for (int pass = 0; pass < n; pass++)
    {
        for (int i = 0; i < n - pass; i++) //   after each pass the greatest number will be at the last !!! So here we dont have to check the last sorted element again and again so we just remove it from the upper limit   by using this  ===  (i<n-pass) ..

        {

            if (arr[i] > arr[i + 1])
            {

                swap(arr[i], arr[i + 1]); // this swaping is happening in the original location only..  not making any copy...
            }
        }
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;

    bubso(arr, 5);

    /*
            the performace of bubso is on the origiinal location so we dont make any copy and dirctly print the soreted elmetn in the main..
    */

    for (int i = 0; i < n; i++)
    { // this loop is for print ing the sorted element

        cout << arr[i] << " ";
    }
}