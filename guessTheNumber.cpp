#include<iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
int main(){
int randomNumber, guessedNumber;
int attempts = 0;
// generating a random number
    // srand(static_cast<unsigned>(time(0)));
int x = time(0);
srand(x);
randomNumber = 1 + rand() % 99;
//loop

while(true){
cout << "enter the guessed number between 1 and 100: "<<endl;
cin >> guessedNumber;
attempts++;
if(guessedNumber > randomNumber)
{
    cout << "your guess is high, aim lower"<<endl;
}
else if (guessedNumber < randomNumber)
{
    cout << "your guess is low, aim higher"<<endl;
}
else
{
cout << "that is right , you guessed it right"<< endl;
break;
}
}
cout << "you guessed the number in: "<< attempts <<" attempts";
return 0;
}
