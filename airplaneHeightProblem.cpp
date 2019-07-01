#include<iostream>
using namespace std;
class Game{
    int player;
public:
    int getPlayer()
    {
        return player;
    }
    void setPlayer(int a)
    {
        player = a;
    }
};
class Player : public Game
{
    int guess;
public:
    int getGuess()
    {
        return guess;
    }
    void setGuess(int a)
    {
        guess = a;
    }
};
int main()
{
    Player p1;
    p1.setPlayer(1);
    cout<<"Guess a number : ";
    int m;
    cin>>m;
    p1.setGuess(m);
    if(p1.getGuess()%2==0)
        cout<<"You Lose"<<endl;
    else if(p1.getGuess()%2!=0)
        cout<<"You Win"<<endl;
}
