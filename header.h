#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;

void displaymainmenu();
void introscene();
void createcharacter();

class character
{
public:
character();
character(int health, int stamina, int luck, int intelligence, int strength, int money);


private:
int health;
int stamina;
int luck;
int intelligence;
int strength;
int money;


};
