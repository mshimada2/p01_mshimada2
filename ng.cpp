#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>

using namespace std;

int main()
{
 
string difficulty;
int easyNum;
int intNum;
int advNum;
srand(time(NULL));

int randNum = 5;

    cout<<endl<<"Welcome to the Number Guesser Game!"; 
        cout<<endl<<"Pick your level of difficulty: Easy, Medium, or Hard";

 cin>> difficulty;

 
 
 if (difficulty == "easy" || "Easy")
 
        

    cout<<endl<<"You must be a beginner. Correctly guess a number between 1 and 10:";
        cin>>easyNum; 
if (easyNum == randNum)

    cout<<endl<<"You must be a mind reader!";

else if (easyNum != randNum)

    cout<<endl<<"Wrong!";



 }

