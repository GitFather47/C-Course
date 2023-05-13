#include<iostream>
using namespace std;

class Item
{
    public:
        int item_no;
        string item_name;
        double item_price;
};
class DiscountedItem : public Item
{
    public:
        int discount_percent;
        int discounted_price;
        void accept_details()
        {
                cout<<"\n Enter Item Name : ";
                cin>>item_name;
                cout<<"\n Enter Item No. : ";
                cin>>item_no;
                cout<<"\n Enter Item Price : ";
                cin>>item_price;
                cout<<"\n Enter Discount Percent : ";
                cin>>discount_percent;
                cout<<"\n ----------------------\n";
                discounted_price = item_price - item_price * discount_percent / 100;
        }
        void display_details()
        {
                cout<<"\n Item Name : "<<item_name;
                cout<<"\n Item No. : "<<item_no;
                cout<<"\n Item Price : "<<item_price;
                cout<<"\n Discount Percent : "<<discount_percent;
                cout<<"\n Discounted Price : "<<discounted_price;
                cout<<"\n ----------------------\n";
        }
};
int main()
{
        int i, qt, discount = 0, price = 0;

        cout<<"\n How many items you want to enter? : ";
        cin>>qt;
        DiscountedItem *di= new DiscountedItem[qt];
        for(i=0; i<qt; i++)
        {
                di[i].accept_details();
        }
        for(i=0;i<qt;i++)
        {
                di[i].display_details();
        }
        for(i=0;i<qt;i++)
        {
                price += di[i].item_price;
        }
        for(i=0;i<qt;i++)
        {
                discount += di[i].item_price-di[i].discounted_price;
        }
        cout<<"\nTotal Price : "<<price;
        cout<<"\nTotal Discount : "<<discount;
        return 0;
}
