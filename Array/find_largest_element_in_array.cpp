
// Problem =  Find largest element in the array 


#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,4,8,2,1};


    int max = arr[0];
    for (int i =0 ;i<=3;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }

    cout<<max;




}