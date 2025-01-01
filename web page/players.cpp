#include<iostream>
#include<string>
using namespace std;
struct date
{
    int day;
    int month;
    int year;
};
struct Player
{
    string name;
    string country;
    string type;    //batter, bowler,all rounder
    int matches;
    int runScored;
    int ballsFaced;
    float average; //score
    void inputData();
    void printData();

};
int main()
{
Player cricPlayers[10]={{"BABAR AZAM","PAKISTAN","BATTER",250,10500,5500,50.70},{"VIRAT KOHLI","INDIA","BATTER",300,9500,500,60.70},{"TRAVIAS HEAD","AUSTRALIA","BATTER",300,10500,5500,80.70}};
int counter=3;
for(int i=0;i<counter;i++)
{
    cricPlayers[i].printData();
}
cricPlayers[counter].inputData();
counter++;
for(int i=0; i<counter;i++)
{
    cout<<"::::::::::player "<<i+1<<" Record:::::::::::";
    cricPlayers[i].printData();
}
    return 0;
}
//,,,,,,,,,,,Member function,,,,,,,,,,,,,,,,
void Player::printData()
{
    cout<<"player Name: "<<name<<endl;
    cout<<"country Name: "<<country<<endl;
    cout<<"player type: "<<type<<endl;
    cout<<"Matches played: "<<matches<<endl;
    cout<<"Runs Scored: "<<runScored<<endl;
    cout<<"BALLS FACED: "<<ballsFaced<<endl;
    cout<<"AVERAGE IS: "<<average<<endl;
}
void Player::inputData()
{

}