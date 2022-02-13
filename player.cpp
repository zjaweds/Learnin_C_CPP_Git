#include<iostream>
using namespace std;

class Player{
    private:
        string name;
        int age;
        int turnNo;
        enum status {Won, lost, OnGoing};
        bool isYourTurn;
        int score;
        int magicNumber;
    public:
        void getDetails();
        Player();
        Player operator=(Player x);
        void takeAMove();
        void celebrate();
        void updateScoreAndTurn(int s);
        Player moveDetails(Player &y);
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        int getScore(){
            return score;
        }
        int getMagicNumber(){
            return magicNumber;
        }
};

Player::Player(){
    name="";
    age = 0;
    turnNo=0;
    isYourTurn = false;
    score=0;
}

void Player::getDetails(){
    cout<<"Name: ";
    cin>>name;
    cout<<"Age: ";
    cin>>age;
}

void Player::takeAMove(){
    cout<<"Enter the magical number: ";
    cin>>magicNumber;
}

Player Player::moveDetails(Player &y){
    return y;
}

Player Player:: operator=(Player x){
    name=x.name;
    age=x.age;
    turnNo=x.turnNo;
    score=x.score;
    magicNumber=x.magicNumber;
    return *this;
}
void Player::updateScoreAndTurn(int s){
    score = s;
    turnNo+=1;
}