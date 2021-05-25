// VectorClassCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class SpecialTable {       // The class
    public:             // Access specifier
        vector<int> table;

        void addValueOnEnd(int x)
        {
            //cout << "Dodawanie elementu " << x << " na koniec" << endl;
            table.push_back(x);
        }

        bool checkEqualityOfAllValues()
        {
            if (table.empty())
            {
                cout << "tablica jest pusta!";
                return false;
            }
            if (table.size() == 1)
            {
                cout << "w tablicy jest tylko 1 element!";
                return false;
            }
            int before = table.front();
            bool result = true;
            for (int var : table)
            {
                if (var != before)
                {
                    result = false;
                    break;
                }
            }
            return result;
        }

        int checkIfValueExists(int x)
        {
            if (table.empty())
            {
                cout << "tablica jest pusta!";
                return -1;
            }
            int index = 0;
            for (int var : table)
            {
                if (var == x)
                {
                    return index;
                }
                index++;
            }
            return -1;
        }

        int countValueExists(int x)
        {
            
            if (table.empty())
            {
                cout << "tablica jest pusta!";
                return -1;
            }
            int counter = 0;
            for (int var : table)
            {
                if (var == x)
                {
                    counter++;
                }
            }
            return counter;
        }

        int sumOfValues()
        {

            if (table.empty())
            {
                cout << "tablica jest pusta!";
                return 0;
            }
            int sum = 0;
            for (int var : table)
            {
                sum += var;
            }
            return sum;
        }

        string toString()
        {

            if (table.empty())
            {
                return "[]";
            }
            string result = "[";
            int index = 1;
            for (int var : table)
            {
                result += to_string(var);
                if (index < table.size()) result += ",";
                index++;
            }
            result += "]";
            return result;
        }

        void printTable()
        {
            cout << "Wyswietlanie wszsytkich elementow: " << endl;
            int i = 1;
            for (int var : table)
            {
                cout << "element nr " << i << " to " << var << "\n";
                i++;
            }
        }
};


int main()
{

    cout << "Start!\n";

    SpecialTable myObj;  // Create an object of MyClass

    cout << "ppkt1: dodawanie elementow..." << endl;
    for (int i = 1; i < 5; i++) myObj.addValueOnEnd(i);
    for(int i=1; i<15; i++) myObj.addValueOnEnd(rand() / ((RAND_MAX + 1u) / 10));

    bool ppkt2 = myObj.checkEqualityOfAllValues();
    cout << "ppkt2: " << ppkt2 << endl;

    int ppkt3 = myObj.checkIfValueExists(8);
    cout << "ppkt3: " << ppkt3 << endl;

    int ppkt4 = myObj.countValueExists(4);
    cout << "ppkt4: " << ppkt4 << endl;

    int ppkt5 = myObj.sumOfValues();
    cout << "ppkt5: " << ppkt5 << endl;

    string ppkt6 = myObj.toString();
    cout << "ppkt6: " << ppkt6 << endl;


    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
