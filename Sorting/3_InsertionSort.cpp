// this islike card we have one in our hand and compare with other while taking

#include <iostream>
#include <algorithm>
using namespace std;

void InsertionSort(int *arr, int n)
{

    for(int i=1;i<n;i++){   //   we started loop form 1 bcz we have one elemnt in stating we are assuming the first element aas sorted and aslopractically  we need an  element to compare with other
        int curr= arr[i];    //  this is the current alwas this sould be compare with previous
        int prev= i-1;   // this the previous to current elemtnt  for after swaping preveious is wrriten below

        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
         arr[prev+1]= curr;
    }
}

int main()
{
    int arr[] = {2, 3, 4, 1, 5};
    int n = 5;
    InsertionSort(arr, 5);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
