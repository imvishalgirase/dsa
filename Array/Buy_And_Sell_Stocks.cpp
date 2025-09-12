#include <iostream>
#include <climits>
using namespace std;

void maxprofit(int *prices,int n){
    int bestbuy[100];
    bestbuy[0] = INT_MAX;

    for(int i=1;i<n;i++){
        bestbuy[i] = min(bestbuy[i-1], prices[i-1]);
    }

    int maxprofit = 0;
    for(int i=1;i<n;i++){   // start from i=1
        int currprofit = prices[i] - bestbuy[i];
        maxprofit = max(maxprofit, currprofit);
    }

    cout << maxprofit << endl;
}

int main(){
    int prices[]={7,6,5,4,3,2};
    int n=6;
    maxprofit(prices, n);
}
