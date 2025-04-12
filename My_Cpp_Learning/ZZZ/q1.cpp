#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

class Customer
{
public:
    string name;
    int age;
    string address;
    string phone;

public:
    Customer(string n, int a, string ad, string p) : name(n), age(a), address(ad), phone(p) {}
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Phone: " << phone << endl;
    }
};

class Account : public Customer
{
public:
    int acc_no;
    float balance;
    static int next_acc_no;

public:
    Account(string n, int a, string ad, string p) : Customer(n, a, ad, p)
    {
        acc_no = ++next_acc_no;
        balance = 0;
    }
    void deposit(float amount)
    {
        balance += amount;
        cout << "Deposit successful. Balance: " << balance << endl;
    }
    void withdraw(float amount)
    {
        if (balance - amount >= 5000)
        {
            balance -= amount;
            cout << "Withdrawal successful. Balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance" << endl;
        }
    }
    void display_balance()
    {
        cout << "Balance: " << balance << endl;
    }
    void transfer(Account &other, float amount)
    {
        if (balance - amount >= 5000)
        {
            balance -= amount;
            other.balance += amount;
            cout << "Transfer successful. Balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance" << endl;
        }
    }
    virtual void display()
    {
        Customer::display();
        cout << "Account number: " << acc_no << endl;
        cout << "Balance: " << balance << endl;
    }
    static void set_next_acc_no(int n)
    {
        next_acc_no = n;
    }
};

int Account::next_acc_no = 0;

class Transaction : public Account
{
protected:
    string date;

public:
    Transaction(string n, int a, string ad, string p) : Account(n, a, ad, p)
    {
        time_t t = time(0);
        struct tm *now = localtime(&t);
        date = to_string(now->tm_mday) + "/" + to_string(now->tm_mon + 1) + "/" + to_string(now->tm_year + 1900);
    }
    virtual void display()
    {
        Account::display();
        cout << "Date: " << date << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of accounts: ";
    cin >> n;

    vector<Account *> accounts;
    for (int i = 0; i < n; i++)
    {
        string name, address, phone;
        int age;
        cout << "Enter customer details for account " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Phone: ";
        cin >> phone;

        Account *acc = new Account(name, age, address, phone);
        accounts.push_back(acc);
    }

    int choice;
    do
    {
        cout << "-----:Bank:-----" << endl;
        cout << "1. Open account" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Display balance" << endl;
        cout << "5. Transfer amount" << endl;
        cout << "6. Mini statement" << endl;
        cout << "0. Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string name, address, phone;
            int age;
            cout << "Enter customer details:" << endl;
            cout << "Name: ";
            cin >> name;
            cout << "Age: ";
            cin >> age;
            cout << "Address: ";
            cin.ignore();
            getline(cin, address);
            cout << "Phone: ";
            cin >> phone;

            Account *acc = new Account(name, age, address, phone);
            accounts.push_back(acc);
            cout << "Account created. Account number: " << acc->acc_no << endl;
            break;
        }
        case 2:
        {
            int acc_no;
            float amount;
            cout << "Enter account number: ";
            cin >> acc_no;
            cout << "Enter amount to be deposited: ";
            cin >> amount;

            bool found = false;
            for (auto acc : accounts)
            {
                if (acc->acc_no == acc_no)
                {
                    acc->deposit(amount);
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Account not found" << endl;
            }
            break;
        }
        case 3:
        {
            int acc_no;
            float amount;
            cout << "Enter account number: ";
            cin >> acc_no;
            cout << "Enter amount to be withdrawn: ";
            cin >> amount;

            bool found = false;
            for (auto acc : accounts)
            {
                if (acc->acc_no == acc_no)
                {
                    acc->withdraw(amount);
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Account not found" << endl;
            }
            break;
        }
        case 4:
        {
            int acc_no;
            cout << "Enter account number: ";
            cin >> acc_no;

            bool found = false;
            for (auto acc : accounts)
            {
                if (acc->acc_no == acc_no)
                {
                    acc->display_balance();
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Account not found" << endl;
            }
            break;
        }
        case 5:
        {
            int acc_no1, acc_no2;
            float amount;
            cout << "Enter account number from which amount is to be transferred: ";
            cin >> acc_no1;
            cout << "Enter account number to which amount is to be transferred: ";
            cin >> acc_no2;
            cout << "Enter amount to be transferred: ";
            cin >> amount;

            bool found1 = false, found2 = false;
            Account *acc1;
            Account *acc2;
            for (auto acc : accounts)
            {
                if (acc->acc_no == acc_no1)
                {
                    acc1 = acc;
                    found1 = true;
                }
                if (acc->acc_no == acc_no2)
                {
                    acc2 = acc;
                    found2 = true;
                }
                if (found1 && found2)
                {
                    break;
                }
            }
            if (!found1 || !found2)
            {
                cout << "One or both accounts not found" << endl;
            }
            else
            {
                acc1->transfer(*acc2, amount);
            }
            break;
        }
        case 6:
        {
            int acc_no;
            cout << "Enter account number: ";
            cin >> acc_no;

            bool found = false;
            for (auto acc : accounts)
            {
                if (acc->acc_no == acc_no)
                {
                    acc->display();
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Account not found" << endl;
            }
            break;
        }
        case 0:
        {
            break;
        }
        default:
        {
            cout << "Invalid choice" << endl;
            break;
        }
        }
    } while (choice != 0);

    for (auto acc : accounts)
    {
        delete acc;
    }

    return 0;
}