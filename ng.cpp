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

int randNum = rand()%3+1;
int randNum2 = rand()%10+1;
int randNum3 = rand()%100+1; 

    cout<<endl<<"Welcome to the Number Guesser Game! "; 
        cout<<endl<<"Pick your level of difficulty: Easy, Medium, or Hard ";

 cin>>difficulty;

 
 
 if (difficulty == "easy" || "Easy")
 
 {
        

    cout<<endl<<"You must be a beginner. Correctly guess a number between 1 and 2:  ";
        cin>>easyNum; 



 }       


if (easyNum == randNum)

{


    cout<<endl<<"Nice! ";

}


else if (easyNum != randNum)

    cout<<endl<<"Wrong! ";




return 0;

}











