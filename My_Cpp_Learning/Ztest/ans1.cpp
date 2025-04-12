#include <iostream>
#include <string>
using namespace std;

class customer
{
public:
    string cus_name;
};

class account : public customer
{
public:
    int cus_ID;
};

class transaction : public account
{
public:
    int bal;
    int minBal;
    transaction(){
        this->minBal=5000;
    }
    void openNewAccount()
    {
        cout << "Enter Account Holder Name: ";
        getline(cin>>ws,cus_name);
        //cout<<cus_name;
        cout << "Enter Account Number: ";
        cin >> cus_ID;
        cout << "Enter initial balance: ";
        cin >> bal;
    }

    void deposit(int amtToBeDeposite)
    {
        bal += amtToBeDeposite;
    }

    void withdraw(int amtToBeWithdraw)
    {
        if (bal - amtToBeWithdraw >= minBal)
        {
            bal -= amtToBeWithdraw;
        }
        else
        {
            cout << "insufficient Balance to perfom Withdraw.";
        }
    }
    void display()
    {
        cout << "Account Holder Name: " << cus_name << endl;
        cout << "Account Number: " << cus_ID << endl;
        cout << "Available Bal: " << bal << endl;
    }
};

int main()
{
    while (true)
    {
        int ch, amtToBeDeposite, amtToBeWithdraw;
        transaction obj;
        
        cout << "\nBank " << endl;
        cout << "-------------------" << endl;
        cout << "1. Open a New Account" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Display Balance" << endl;
        //cout << " Transfer " << endl;
        //cout << " Mini Statement " << endl;
        cout << "5. Exit" << endl;
        cout << "-------------------" << endl;

        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            obj.openNewAccount();
            break;
        case 2:
            cout << "Enter amount to be Deposite: ";
            cin >> amtToBeDeposite;
            if (amtToBeDeposite > 0)
            {
                obj.deposit(amtToBeDeposite);
            }
            else
            {
                cout << "Please enter valid amount!";
            }
            break;
        case 3:
            cout << "Enter amount to be Withdraw: ";
            cin >> amtToBeWithdraw;
            if (amtToBeWithdraw >= 100 && amtToBeWithdraw <= obj.bal)
            {
                obj.withdraw(amtToBeWithdraw);
            }
            else
            {
                cout << "Please enter valid amount!";
            }
            break;
        case 4:
            obj.display();
            break;
        case 5:
            exit(1);
            break;
        }
    }
}
