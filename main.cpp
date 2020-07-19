//
//  main.cpp
//  Plays
//
//  Created by Bo Ying Liu on 9/29/19.
//  Copyright © 2019 Bo Ying Liu. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

struct PlayerInfo
{
    string name;
    int playNum;
    int score;
};

int main()
{
    const int NUM_PLAYERS = 12; // NUMBER OF PLAYERS
    PlayerInfo players[NUM_PLAYERS];
    int index;//index in for loop for array
    int total=0;//initialize the total score
    int maxScore=0;//initialize maximum score
    int maxIndex=0;//initialize max score index
    //use for loop to get user input for player's information
    for (index=0;index<NUM_PLAYERS;index++)
    {
        //get players information
        cout<<"Enter the Player #"<<index+1<<" information "<<endl;//index start from 1
        cout<<endl;
        cout<<"Player's Name: ";//get players' name
        cin>>players[index].name;
        cout<<endl;
        cout<<"Player's ID Number: ";//get players' ID number
        cin>>players[index].playNum;
        cout<<endl;
        cout<<"Player's Score: ";//get players' score
        cin>>players[index].score;
        cout<<endl;
        
        
        total=total+players[index].score;//add up the total scores for the team
        
        //check the maximum score , if it is maximum score, then set it equal the maximum score and mark the index
        if(players[index].score>maxScore)
        {
            maxScore=players[index].score;
            maxIndex=index;
        }
    }
    
    //display each player's information
    cout<<left<<setw(15)<<"Name";
    cout<<right<<setw(15)<<"ID Number";
    cout<<right<<setw(15)<<"score"<<endl;
    
    //display a table
    for (index=0;index<NUM_PLAYERS;index++)
    {
        cout<<left<<setw(15)<<players[index].name<<right<<setw(15)<<players[index].playNum<<right<<setw(15)<<players[index].score<<endl;
    }
    cout<<endl;
    cout<<"The total points scored of the team is "<<total<<endl;
    cout<<"The player "<<players[maxIndex].name<<" ID Number is "<<players[maxIndex].playNum<<" got maximum points "<<players[maxIndex].score<<endl;
    
    return 0;
    
    
    
}
