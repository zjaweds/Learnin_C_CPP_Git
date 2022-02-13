#include<iostream>
#include"player.cpp"
using namespace std;

int square(int x){
    return x*x;
}
int makeItHalf(int x){
    return x/2;
}
int takeItsModulo10(int x){
    return x%10;
}
int makeItQuarter(int x){
    return x/4;
}
int makeItDouble(int x){
    return 2*x;
}
int makeItQuadruple(int x){
    return 4*x;
}
int addOne(int x){
    return x+1;
}
int addTen(int x){
    return x+10;
}
int addFive(int x){
    return x+5;
}
int subtractFive(int x){
    return x-5;
}
int subtractTen(int x){
    return x-10;
}

void selectOperation(Player &X,int x){
    switch(x) {
        case 1:
            X.updateScoreAndTurn(square(X.getScore()));
            break;
        case 2:
            X.updateScoreAndTurn(makeItHalf(X.getScore()));
            break;
        case 3:
            X.updateScoreAndTurn(makeItDouble(X.getScore()));
            break;
        case 4:
            X.updateScoreAndTurn(makeItQuadruple(X.getScore()));
            break;
        case 5:
            X.updateScoreAndTurn(addOne(X.getScore()));
            break;
        case 6:
            X.updateScoreAndTurn(addTen(X.getScore()));
            break;
        case 7:
            X.updateScoreAndTurn(addFive(X.getScore()));
            break;
        case 8:
            X.updateScoreAndTurn(subtractFive(X.getScore()));
            break;
        case 9:
            X.updateScoreAndTurn(subtractTen(X.getScore()));
            break;
        case 10:
            X.updateScoreAndTurn(takeItsModulo10(X.getScore()));
            break;
        case 11:
            X.updateScoreAndTurn(makeItQuarter(X.getScore()));
            break;
        case 0:
            X.updateScoreAndTurn(0);
            break;
        default:
            cout<<"Error!"<<endl;
    }
}