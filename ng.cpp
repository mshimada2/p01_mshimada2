#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>

using namespace std;

int main()
{

int easyNum;

srand(time(NULL));

int randNum = rand() % 10 + 1; 

    cout<<endl<<"Welcome to the Number Guesser Game! The goal of this game is to type in the right number that the program picks randomnly from 1-10. Please enter a number through 1-10:  "; 
        cin>>easyNum;        


if (easyNum == randNum)

{


    cout<<endl<<"Are you related to Proffesor X ? You got it right!  ";

}

else if (easyNum > randNum) 
{
int lower = easyNum - randNum;

cout<<endl<<"Wrong! You missed the correct number by "<<lower<<" . ";

}

else 

{
int higher = randNum - easyNum;

cout<<endl<<"Wrong! You missed the correct number by "<<higher<<" . ";


}


return 0;

}











