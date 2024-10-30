#include <iostream>

#include <time.h>

using namespace std;

int main()
{

    srand(time(0));
    int a;
    int randomNo = (rand() % 100) + 1;

    cout << "-:--- HELLOW SWAGATAM TO THE NUMBER GUESSING GAME ---:-" << endl;
    cout << " ------ GUESS A NO BETWEEN 1 TO 100----" << endl;

    for (int i = 1; i <= 100; i++)
    {
        cout << "ATTEMPT NO : " << i << endl;
        cout << "ENTER THE GUESSED NO :  ";
        cin >> a;
        cout << endl;

        if (a == randomNo)
        {
            system("cls");
            cout << " CONGRATULATIONS YOU FOUND THE NUMBER AT " << i << " ATTEMPT";
            break;
        }
        if (a < randomNo)
        {
            system("cls");
            cout << "NUMBER IS LARGER THAN " << a << endl;
            cout << "TRY AGAIN" << endl;
        }
        if (a > randomNo)
        {
            system("cls");
            cout << "NUMBER IS SMALLER THAN " << a << endl;
            cout << "TRY AGAIN" << endl;
        }
       
    }

    return 0;
}