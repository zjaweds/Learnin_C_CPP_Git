#include<iostream>
#include<vector>
#include"moves.cpp"

using namespace std;

int main(){
    vector<Player> Players;
    int numberOfPlayers;
    int numberOfTurns;
    cout<<"------------->Let's Start!-------------->"<<endl<<endl;
    cout<<"How Many Players: ";
    cin>>numberOfPlayers;

    Players.resize(numberOfPlayers);
    for(int i=0;i<numberOfPlayers;i++){
        Players[i].getDetails();
    }
    cout<<"How Many Turns: ";
    cin>>numberOfTurns;
    for(int turns=0;turns<numberOfTurns;turns++){
        for(auto x= Players.begin();x!=Players.end();++x){
            x->takeAMove();
            initiateAMove(Players);
        }
        for(auto x= Players.begin();x!=Players.end();++x){
            cout<<(*x).getName()<<"<------->"<<(*x).getScore()<<endl;       
        }
    }
    cout<<"____________Scoreboard______________\n";
    for(auto x= Players.begin();x!=Players.end();++x){
            cout<<(*x).getName()<<"<------->"<<(*x).getScore()<<endl;       
    }
    cin.get();
}