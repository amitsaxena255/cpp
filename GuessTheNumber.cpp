#include <iostream>
using std::cout;
using std::cin;
int main()
{
    int winner = 7;
    int ans=-1;
    while(ans!=winner){
        cout << "Guess my number (1-10): ";
        cin >> ans;
        if(ans<winner){
            cout << "You guessed too low\n";
        }else if(ans>winner){
            cout << "You guessed too high\n";
        }else{
            cout<<"You got it!";
        }
    }
    return 0;
}