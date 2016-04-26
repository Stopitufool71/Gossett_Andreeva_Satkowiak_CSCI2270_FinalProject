#ifndef Header
#define Header

#include <iostream>
#include<cstdlib>
#include<string>
#include<vector>
using namespace std;



class character
{
public:
bool startgame=false;
string type="";
character();
setcharacter(int hp, int st, int lu ,int inte, int str, int mon);
void stats();
void displaymainmenu();
void introscene();
void createcharacter();
void clearscreen();
void choosepace();
struct vertex;

struct adjVertex{
    vertex *v;
    int weight;
    string road;
    bool visited;
};

struct vertex{
    std::string name;
    std::string state;
    std::vector<adjVertex> adj;
};

        void addEdge(std::string v1, std::string v2, int weight, string road);
        void addVertex(std::string name, std::string state);
        void displayEdges();
        void playgame();
        std::vector<vertex> vertices;


private:
string currentlocation;
int health;
int stamina;
int luck;
int intelligence;
int strength;
int money;
int gas;
int day;
int i;
};


#endif
