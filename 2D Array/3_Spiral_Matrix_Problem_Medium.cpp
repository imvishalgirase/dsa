/*
        first of all see the image of  this problem
*/

#include <iostream>
using namespace std;
void spiralmatrix(int mat[4][4], int n, int m)
{

    /*
    srow =  starting row  and erow= ending row

    same for coloum




    i for row

    j for coloum



    approch  == while going horizontal printing(top, bottom ) we focus on printng the colum elemnt using  "j" vise varsa   ******************


    */

    int srow = 0, scol = 0;
    int erow = n - 1, ecol = m - 1;


  // there t=should be a condition until it should print = while loop

  while(srow <= erow  &&  scol<= ecol){   //  for odd matix in which m != n for that case we have include the equal to sign ; if we dont include it the middle elemnt will not be print


    

    // printing  top

    for (int j = scol; j <= ecol; j++)
    {
        cout << mat[srow][j] << " "; //   Always print row first and then coumn , here the row is same but the colum is changing so srow is fixed and j is changing as variable
    }

    // printing right
    for (int i = srow + 1; i <= erow; i++)
    {
        cout << mat[i][ecol] << " "; //  Always print row first and then coumn ,  here the coloumn is same but the row is changing so scol is fixed and i is changing as variable
    }
    // printing bottom

    for (int j = ecol - 1; j >= scol; j--)
    {

        if(srow==erow){  //  "corner conition"   srow==erow  this means we are middle boundre which is alredy printed by the top
            break;
        }
        cout << mat[erow][j] << " "; //   Always print row first and then coumn , here the row is same but the colum is changing so srow is fixed and j is changing as variable
    }

    // printing  left

    for (int i = erow-1; i >= srow + 1; i--)
    {

         if(scol==ecol){  //  "corner conition"   scol==ecol  this means we are middle boundre which is alredy printed by the right
            break;
        }
        cout << mat[i][scol] << " "; //   Always print row first and then coumn  , here the coloumn is same but the row is changing so scol is fixed and i is changing as variable
    }



        srow++ ; scol++;    //  this 2 line is for making the sprial  by this increment and decrement we can shift our printing position
        erow-- ; ecol--;     //  above line

  }


}

int main()
{
    int mat1[4][4] = { {1, 2, 3, 4},  // here the m=n   the corener conditions are not need to this
                      {5, 6, 7, 8},
                      {9, 10, 11, 12},
                      {13, 14, 15, 16} };



    int mat2[5][4] = { {1, 2, 3, 4},      // this is the odd one codeintio in which the m!=n  ,,,  so here the some elemnt will be print duplicate time so we need the corner coniditon for this
                      {5, 6, 7, 8},
                      {9, 10, 11, 12},
                      {13, 14, 15, 16},
                      {17,18,19,20} }   ;    
                      
                      
    spiralmatrix(mat2,5,4);


            
}