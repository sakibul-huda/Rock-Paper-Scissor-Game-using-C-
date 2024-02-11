#include "game.h"
#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
game::game() // constructor used for presentation
{

    cout<<"\n\n\t\t\t###################################################\n";
    cout<<"\t\t\tWelcome to the Game Developed by Sakibul Huda Rejon\n";
    cout<<"\t\t\t###################################################\n";


}

void game::Description()  // used for presentation
{
    cout<<"\n\t\t\t\t\t!! Instructions !!\n"<<endl;
    cout<<"   To Play Our Rock-Scissor-Paper game you will have to choose\n   one option from the given 3 options that will be displayed"<<endl;
    cout<<"   once the game starts"<<endl;
    cout<<"\n\t\t\t\t!! Please Read out the winning Rules !!\n"<<endl;
    cout<<"   Rock vs Scissor -> Rock wins"<<endl;
    cout<<"   Rock vs Paper -> Paper wins"<<endl;
    cout<<"   Paper vs Scissor -> Scissor wins"<<endl;
}

void game::initiate()
{
    cout<<"\n\t\t\t\t\t!! Game Starts Now !!\n"<<endl;
}

void game::getInput() //taking user input
{
    cout<<endl<<"   1. Rock : "<<endl;
    cout<<"   2. Paper : "<<endl;
    cout<<"   3. Scissor : "<<endl;
    try
    {
    cout<<"   Please Enter Your choice: ";
    cin>>choice;
    if(cin.fail())
    {
        cin.clear();
        cin.ignore(100,'\n');
        throw "Invalid Input.";
    }

    }
    catch(const char *msg)
    {
        cout<<msg;
    }
}

void game::config()  //setting up the gaming mechanism here along with the results.
{
    if(choice==1 || choice==2 ||choice==3)
    {
        srand(time(0));
//srand(static_cast<unsigned int>(time(0)));
        computer_value=(rand()%3)+1;
                       if(computer_value==choice)
        {
            if(computer_value==1)
            {
                cout<<"System took Rock"<<endl;
                cout<<"It's a Tie"<<endl;
            }
            else if(computer_value==2)
            {
                cout<<"System took Paper"<<endl;
                cout<<"It's a Tie"<<endl;
            }
            else if(computer_value==3)
            {
                cout<<"System took Scissor"<<endl;
                cout<<"It's a Tie"<<endl;
            }
            else
            {
                cout<<"Oops,System Generated error, please try again!"<<endl;
                cout<<"It's a Tie"<<endl;
            }

        }
        else if(computer_value!=choice)
        {
            if(computer_value==1 && choice==2)
            {
                cout<<"System took Rock"<<endl;
                cout<<"You Loose,Better Luck Next time"<<endl;

            }
            else if(computer_value==1 && choice==3)
            {
                cout<<"System took Rock"<<endl;
                cout<<"You Loose,Better Luck Next time"<<endl;

            }
            else if(computer_value==1 && choice==2)
            {
                cout<<"System took Rock"<<endl;
                cout<<"You Loose,Better Luck Next time"<<endl;

            }
            else if(computer_value==3 && choice==2)
            {
                cout<<"System took Scissor"<<endl;
                cout<<"You Loose,Better Luck Next time"<<endl;

            }
            else
            {
                cout<<"Congrats! You have Won."<<endl;
            }

        }
    }
    else
    {
        cout<<"Please Try Again."<<endl;
    }
}
