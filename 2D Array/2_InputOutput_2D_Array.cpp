#include <iostream>

using namespace std;

int main()
{
    int arr[3][4];
    for (int i = 0; i < 3; i++)  // taking row
    {

        for (int j = 0; j < 4; j++) //  traking coloum
        {

            cin >> arr[i][j];  // takking the 2d at one size 
        }
    }



/*below part is for output which is like for  input 1 to 12  ==  


1 2 3 4     =  row 1
5 6 7 8     =  row 2
9 10 11 12  =  row 3

*/

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 4; j++)
        {

            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}
