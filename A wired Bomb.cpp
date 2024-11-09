//  A WIRED BOMB ( BASIC GAME )
#include<iostream>
#include<string>
#include<thread>
#include<chrono>
using namespace std;
using namespace chrono;
int main()
{
string clr1 = "Blue";
string clr2 = "Yellow";
string clr3 = "Red";
string selected;
cout << "CHOOSE THE WRITE OPTION OTHERWISE THE BOMB EXPLODES!!!" << endl;
cout.flush();
        this_thread::sleep_for(seconds(2));
cout << "CHOOSE ONE: Blue, Red, Yellow: \n";
cin >> selected;
if(selected != clr3)
{
    cout << "COUNTDOWN HAS BEEN STARTED! \n";
    for(int i = 5; i >= 1; i--)
    {
        cout << i << endl;
        cout.flush();
        this_thread::sleep_for(seconds(1));
    }
    cout << "BOOOM !!!!";
} else {
    cout << "CONGRATS! YOU FOUND THE CORRECT WIRE!";
}
return 0;
}
