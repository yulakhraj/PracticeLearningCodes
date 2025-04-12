#include <iostream>
using namespace std;

class Item 
{
public:
    string itemcode;
    string itemname;
    char itemtype;
    int unitprice;
    int qtypurchased;
    int gross;
    int discountRate; 
    int discountAmount; 
    int netAmount;

    Item(){}
    Item(string code, string name, char type, int up, int qty) 
    {
        itemcode = code;
        itemname = name;
        itemtype = type;
        unitprice = up;
        qtypurchased = qty;
    }

    void calculateBill() 
    {
        gross = unitprice * qtypurchased;
        if (itemtype == 'A')
            discountRate = 5;
        else if (itemtype == 'B')
            discountRate = 5.5;
        else if (itemtype == 'C')
            discountRate = 10;
        else
            discountRate = 8;  
        discountAmount = discountRate * gross / 100;
        netAmount = gross - discountAmount;

        int netPrice = netAmount;
        if (netPrice >= 5000)
            discountRate = 5;
        else if (netPrice >= 3500)
            discountRate = 4.5;
        else if (netPrice >= 2500)
            discountRate = 2;
        discountAmount += discountRate * netAmount / 100; 
        netAmount -= discountAmount;
    }

    void showBill() 
    {
        cout << "Item Code: " << itemcode << endl;
        cout << "Item Name: " << itemname << endl;
        cout << "Item Type: " << itemtype << endl;
        cout << "Unit Price: " << unitprice << endl;
        cout << "Quantity: " << qtypurchased << endl;
        cout << "Gross: " << gross << endl;
        cout << "Discount (%): " << discountRate << endl;
        cout << "Discount Amount: " << discountAmount << endl;
        cout << "Net Amount: " << netAmount << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of items: ";
    cin >> n;
    Item *items = new Item[n];

    for (int i = 0; i < n; i++) {
        string code, name;
        char type;
        int up, qty;

        cout << "Item " << i+1 << ":" << endl;
        cout << "Enter item code: ";
        cin >> code;
        cout << "Enter item name: ";
        cin >> name;
        cout << "Enter item type (A/B/C/D): ";
        cin >> type;
        cout << "Enter unit price: ";
        cin >> up;
        cout << "Enter quantity purchased: ";
        cin >> qty;

        items[i] = Item(code, name, type, up, qty); 
        items[i].calculateBill();
    }

    cout << "************INVOICE************" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Item " << i+1 << ":" << endl;
        items[i].showBill();
        cout << endl; 
    }    
}