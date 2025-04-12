#include <iostream>
#include <string>

using namespace std;

class Employee {
   private:
    int empCode;
    string empName;
    char gender;
    string dateOfBirth;
    int grade;
    double basicPay, da, hra, ca, gross, pfDeduction, itDeduction, totalDeduction, netPay;

    public:
    Employee(int empCode, string empName, char gender, string dateOfBirth, int grade, double basicPay) {
        this->empCode = empCode;
        this->empName = empName;
        this->gender = gender;
        this->dateOfBirth = dateOfBirth;
        this->grade = grade;
        this->basicPay = basicPay;

        // Calculate commercials
        switch (grade) {
            case 1:
                da = 0.8 * basicPay;
                hra = 0.4 * (basicPay + da);
                ca = 5000;
                break;
            case 2:
                da = 0.85 * basicPay;
                hra = 0.35 * (basicPay + da);
                ca = 4500;
                break;
            case 3:
                da = 0.9 * basicPay;
                hra = 0.3 * (basicPay + da);
                ca = 4000;
                break;
            case 4:
                da = basicPay;
                hra = 0.25 * (basicPay + da);
                ca = 3500;
                break;
            default:
                da = 0;
                hra = 0;
                ca = 0;
                break;
        }

        gross = basicPay + da + hra + ca;
        pfDeduction = 0.125 * gross;
        itDeduction = gross > 50000 ? 0.092 * gross : 0;
        totalDeduction = pfDeduction + itDeduction;
        netPay = gross - totalDeduction;
    }

    void displayPaySlip() {
        cout << "Employee Code: " << empCode << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Gender: " << gender << endl;
        cout << "Date of Birth: " << dateOfBirth << endl;
        cout << "Grade: " << grade << endl;
        cout << "Basic Pay: " << basicPay << endl;
        cout << "Dearness Allowance (DA): " << da << endl;
        cout << "House Rent Allowance (HRA): " << hra << endl;
        cout << "Conveyance Allowance (CA): " << ca << endl;
        cout << "Gross Pay: " << gross << endl;
        cout << "Provident Fund (PF) Deduction: " << pfDeduction << endl;
        cout << "Income Tax (IT) Deduction: " << itDeduction << endl;
        cout << "Total Deduction: " << totalDeduction << endl;
        cout << "Net Pay: " << netPay << endl;
    }
};

int main() {
    Employee emp1(123, "John Doe", 'M', "01/01/1990", 2, 50000);
    emp1.displayPaySlip();

    Employee emp2(456, "Jane Doe", 'F', "01/01/1995", 4, 60000);
    emp2.displayPaySlip();

    return 0;
}