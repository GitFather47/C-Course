#include <iostream>

using namespace std;

int main()
{
    int sell,buy,profit,loss;
    cout<<"Enter the buying price: ";
    cin>>buy;
    cout<<"Enter the selling price: ";
    cin>>sell;
    if (sell>buy){
        profit = sell-buy;
        cout<<"Profit: "<<profit;
    }
    else{
        loss=buy-sell;
        cout<<"Loss: "<<loss;
    }
    return 0;
}
