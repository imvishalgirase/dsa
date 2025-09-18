// Trike to learn method of selction sort ===   we are ting to selct the min value from the arr...

#include <iostream>

#include <algorithm>
using namespace std;

void SelcSort(int *arr, int n)
{

  for (int i = 0; i <1; i++)
  {
    int minIdx = i;

    // below loop is for finding the minimum
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[minIdx])
      {
        minIdx = j;
      }
    }
    
    swap(arr[i], arr[minIdx]);
  }
}

int main()
{
  int arr[] = {2, 4, 3, 1, 5, 6};
  int n = 5;
  SelcSort(arr, 5);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}