#include<iostream>
#include<string>

using namespace std;
class Player
{
private:
    //attributes
    string name{"Player"};
    int health{100};
    int xp{3};


public:
Player()
{
    cout<<"No args constructor called"<<endl;
}
Player(string name)
{
    cout<<"String args constructor called"<<endl;
}
Player(string name, int health, int xp)
{
    cout<<"Three args constructor called"<<endl;
}
~Player()
{
    cout<<"Destructor called for "<<name<<endl;
}
    //methods
    void talk(string text_to_say)
    {
        cout<<name<<" says "<<text_to_say<<endl;
    }
    bool is_Dead();
};
