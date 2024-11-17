#include <iostream>
using namespace std;

class A
{

public:
    int num;

    void number()
    {
        cout << "1 for British Pound " << endl;
        cout << "2 for Mexican Pesos " << endl;
        cout << "3 for Japanese Yen " << endl;
        cout << "4 for Chinese Yen " << endl;
        cout << "5 for Australian Dollar "
             << "\n\n";
        cout << "Enter number here: ";
        cin >> num;
    }
};

class B : public A
{
private:
    float money;
    float res;

public:
    void ifs()
    {
        number();

        if (num == 1)
        {
            cout << "Enter how much US money you have:  ";
            cin >> money;
            res = money * 0.77; // British pound is 0.77 for every US dollar.
            cout << money << "$ in US is " << res << " in British pounds";
        }

        if (num == 2)
        {
            cout << "Enter how much US money you have:  ";
            cin >> money;
            res = money * 20.08; // Mexican Pesos is 20.08 for every US dollar.
            cout << money << "$ in US is " << res << " in Mexican Pesos. ";
        }
    }
};

class C : public B
{
private:
    float money, res;

public:
    void ifs2()
    {
        ifs();
        if (num == 3)
        {
            cout << "Enter how much US money you have:  ";
            cin >> money;
            res = money * 125.31; // Japansese Yen is 125.31 for every US dollar.
            cout << money << "$ in US is " << res << " in Japanese Yen. ";
        }

        if (num == 4)
        {
            cout << "Enter how much US money you have:  ";
            cin >> money;
            res = money * 6.37; // Chinese Yen is 6.37 for every US dollar.
            cout << money << "$ in US is " << res << " in Chinese Yen. ";
        }

        if (num == 5)
        {
            cout << "Enter how much US money you have: ";
            cin >> money;
            res = money * 1.35; // Australian Dollar is 1.35 for every US dollar.
            cout << money << "$ in US is " << res << " in Australian Dollar. ";
        }

        else
        {
            cout << "Please enter a number that is listed above! ";
        };
    }
};

int main()
{
    C obj;
    obj.ifs2();
}

// This code is a US currency converter.


