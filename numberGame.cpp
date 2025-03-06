#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    int guess, Attempt=1;
    bool playGame=true;
    string playAgain;

    cout<<"Welcome to Number Guessing Game"<<endl;

    srand(time(0));
    int target= 1 + rand() % 100;

    while(playGame){
   
    cout<<"\nEnter your guess:";
    cin>>guess;
    if(guess==target){
        cout<<"\nCongratulations!! You guessed the correct number in "<<Attempt<<" attempts.";
        cout<<"\nDo you want to play again(yes/no): ";
        cin>>playAgain;
        if(playAgain=="no")
        {
         cout<<"Thanks for playing!!";
         break;
        }
        else{
          Attempt=1;
          target= 1 + rand() % 100;
        } 
    }
    else if(guess<target){
        cout<<"You guessed too low. Try Again!!";
    }
    else{
        cout<<"You guessed too high. Try Again!!";
    }
    Attempt++;

    }

    return 0;
}
