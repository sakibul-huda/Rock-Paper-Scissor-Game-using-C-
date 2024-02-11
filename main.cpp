#include <iostream>
#include<stdlib.h>
#include<string.h>
#include "game.h"

using namespace std;

int main()
{

    game obj;

    obj.Description();
    obj.initiate();
    for(int i=0;1;i++){
    obj.getInput();
   obj.config();
    }
    return 0;
}


/*
**
**
**
**
**
Stone Paper Scissor or Rock Paper Scissor is a game that is played between two people,
Each player in this game forms one of three shapes. The winner will be decided as per the given rules:

Rock vs Scissor -> Rock wins
Rock vs Paper -> Paper wins
Paper vs Scissor -> Scissor wins
In this game, the user is asked to make choices based on both computer and user choices and
the results are displayed showing both computer and user choices.
**
**
**
**
**/
