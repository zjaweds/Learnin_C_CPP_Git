#include<iostream>
#include<thread>
#include<vector>
#include<time.h>
#include"operationSelection.cpp"

using namespace std;

void initiateAMove(vector<Player> &Players){
    srand((unsigned)time(0));
    int max =11;
    int min =0;
    int range = max - min + 1;
    for(auto x = Players.begin();x!=Players.end();++x){
        int rn = rand() % range + min;
        Player Y = (*x).moveDetails(*x);
        int option = (rn + Y.getMagicNumber())%12;
        selectOperation(Y, option);
    }
}
