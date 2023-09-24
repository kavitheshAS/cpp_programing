#include<iostream>
using namespace std;
int main()
{
    cout<<"welcome to the akinator,the rules are simple.\n";
    cout<<"1)ask a friend to type in a integer.\n";
    cout<<"2)make sure your eyes are closed.\n";
    cout<<"3)now u have 3 guesses to get the number right.\n";
    int secnum;
    cout<<"hey friend ,type in the integer:";
    cin>>secnum;
    int spacenum=0;
    while(spacenum<=37) /*idk what the command is to clear the console/terminal mid execution hence jumped 37 lines belowto make an illusion that the entered number dissapeared*/
    {
        cout<<"        \n";
        spacenum++;
    }
    
    int guessno;
    int guesscount=0;
    cout<<"enter your guess:";
    cin>>guessno;
    while((secnum!=guessno) && (guesscount<=1))
    {
        guesscount++;
        cout<<"TRY AGAIN!, enter your guess:";
        cin>>guessno;
    }
    if(guessno==secnum && guesscount<=1)
    {
        cout<<"congratulations!,you guessed it right";
    }
    else if(guessno!=secnum && guesscount>1)
    {
        cout<<"you ran out of guesses,better luck next time!";
    }
    else
    {
        cout<<"idk";
    }
    return 0;
}