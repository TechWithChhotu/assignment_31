/*Write a C++ program to define a base class Item (item-no, name, price).
Derive a class Discounted-Item (discount-percent). A customer purchases
'n' items. Display the item-wise bill and total amount using appropriate
format.
Output
*/
#include <iostream>
using namespace std;
class Item
{
protected:
    int ItemNumber;
    string ItemName;
    float ItemPrice;

public:
};
class Discount : private Item
{
private:
    int DiscountPercent, DiscountPrice;

public:
    void PurchassItem()
    {
        cout << "-----------------------------------------" << endl;
        cout << "Enter Item Number      :  ";
        cin >> ItemNumber;
        fflush(stdin);
        cout << "Enter Item Name        :  ";
        getline(cin, ItemName);
        cout << "Enter Item Price       :  ";
        cin >> ItemPrice;
        cout << "Enter Discount(percent):  ";
        cin >> DiscountPercent;
        DiscountPrice = ((ItemPrice * DiscountPercent) / 100);
    }
    void DisplayItem()
    {
        cout << "\nItem Number       :  " << ItemNumber << endl;
        cout << "Item Name         :  " << ItemName << endl;
        cout << "Item Price        :  " << ItemPrice << endl;
        cout << "Discount price    :  " << DiscountPrice << endl;
        cout << "------------------------------" << endl;
    }
    int GetPrice()
    {
        return ItemPrice;
    }
    int GetDiscount()
    {
        return DiscountPrice;
    }

    friend float TotalPrice(Discount I[], int N);
};
float TotalPrice(Discount I[], int N)
{
    system("cls");
    float totalPrice = 0,
          totalDiscount = 0;
    for (int i = 0; i < N; i++)
    {
        totalPrice += I[i].GetPrice();
        totalDiscount += I[i].GetDiscount();
        I[i].DisplayItem();
    }
    cout << "\t\tPayable Amount" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Total price         : " << totalPrice << endl;
    cout << "Total Discount      : " << totalDiscount << endl;
    cout << "after Discount price: " << totalPrice - totalDiscount << endl;
    cout << "-----------------------------------------" << endl;
}
int main()
{
    int N;
    cout << "How many item you want to purchases:  ";
    cin >> N;
    Discount I[N];
    for (int i = 0; i < N; i++)
    {
        I[i].PurchassItem();
    }

    TotalPrice(I, N);
    return 0;
}
