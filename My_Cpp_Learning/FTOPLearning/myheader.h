using namespace std;
void funct01()
{
    char ch;
    int i;
    long l;
    float f;
    double d;

    cout << "\n Enter a character : ";
    cin >> ch;
    cout << "\n Enter an integer :";
    cin >> i;
    cout << "\n Enter a long :";
    cin >> l;
    cout << "\n Enter a float :";
    cin >> f;
    cout << "\n Enter a double : ";
    cin >> d;

    cout << "\n " << ch << "\t" << i << "\t" << l << "\t" << f << "\t" << d;
}
//---------------------------------------------------------------------------------

void funct02()
{
    char ch1, ch2, ch3;

    cout << "\n Enter a chareacter :";
    cin >> ch1;
    cout << "\n Enter a chareacter :";
    cin >> ch2;
    cout << "\n Enter a chareacter :";
    cin >> ch3;
    cout << "\n ch1 : " << ch1 << "\t ch2 : " << ch2 << "\t ch3 :" << ch3;
}
//---------------------------------------------------------------------------------

void funct03()
{
    char ch1, ch2, ch3;
    cout << "\n Enter three chareacter :";
    cin >> ch1 >> ch2 >> ch3;

    cout << "\n ch1 : " << ch1 << "\t ch2 : " << ch2 << "\t ch3 :" << ch3;
}
//---------------------------------------------------------------------------------

void funct05()
{
    int i = 1;
    float f = 2.56;
    double d = 0.00245;

    cout.width(10);
    cout.fill('*');
    cout << i;
    cout.width(10);
    cout.fill('*');
    cout << f;
    cout.width(10);
    cout.fill('*');
    cout << d;
    cout.width(10);
    cout.fill('*');
    cout.precision(10);
    cout << d;

    bool ch = 1;
    cout.setf(ios::boolalpha);
    cout << endl << ch;
    cout.unsetf(ios::boolalpha);
    cout.unsetf(ios::scientific);

    double d2 = 0.00000456;
    cout << endl << d2;
    cout.setf(ios::scientific);
    cout << endl << d2;
    cout.unsetf(ios::scientific);
}
//---------------------------------------------------------------------------------
