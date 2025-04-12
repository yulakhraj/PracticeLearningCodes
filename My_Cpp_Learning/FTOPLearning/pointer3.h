#pragma once
using namespace std;

float sum(float a, float b)
{
    return(a + b);
}

float diff(float a, float b)
{
    return(a - b);
}

float prod(float a, float b)
{
    return(a * b);
}

float quot(float a, float b)
{
    return(a / b);
}

void funccall(float (*fptr)(float, float), float f1, float f2)
{
    cout << "\n Result :" << fptr(f1, f2);
}

void funct004()
{
    float (*fptr)(float, float); 
    int ch;
    float f1, f2;
    cout << "\n Enter a float value : ";
    cin >> f1;
    cout << "\n Enter a float value : ";
    cin >> f2;

    do
    {
        cout << "\n Main Menu \n";
        cout << "\n 1. Sum";
        cout << "\n 2. Difference";
        cout << "\n 3. Product";
        cout << "\n 4. Quotient";
        cout << "\n 5. Exit";
        cout << "\n Please enter your choice (1-5) : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            fptr = sum;
            funccall(fptr, f1, f2);
        }
        break;
        case 2:
        {
            fptr = diff;
            funccall(fptr, f1, f2);
        }
        break;
        case 3:
        {
            fptr = prod;
            funccall(fptr, f1, f2);
        }
        break;
        case 4:
        {
            fptr = quot;
            funccall(fptr, f1, f2);
        }
        break;
        }
    } while (ch < 5);


}

