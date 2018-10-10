#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{

    cout << "Enter Rock, Scissors or Paper (q to break):" << endl;
    srand(time(0));
    string playerch;
    string compch;
    while (cin >> playerch)
    {
        if (playerch=="q") break;
        int a=rand()%3;
        if (a==0) compch="Rock";
        if (a==1) compch="Scissors";
        if (a==2) compch="Paper";
        cout << "Your choice: " << playerch << endl;
        cout << "Computer choice: " << compch << endl;
        if (playerch==compch) cout << "Draw\n";
        if (playerch=="Paper" && compch=="Rock") cout << "You win!\n";
        if (playerch=="Paper" && compch=="Scissors") cout << "Looser!\n";
        if (playerch=="Rock" && compch=="Scissors") cout << "You win!\n";
        if (playerch=="Rock" && compch=="Paper") cout << "Looser!\n";
        if (playerch=="Scissors" && compch=="Paper") cout << "You win!\n";
        if (playerch=="Scissors" && compch=="Rock") cout << "Looser!\n";
        cout << "\nEnter Rock, Scissors or Paper (q to break):" << endl;
    }
    cout << "\nBye!\n";
    cin.get();
    cin.get();
    return 0;
}
