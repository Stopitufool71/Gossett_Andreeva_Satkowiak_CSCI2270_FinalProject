// The Boulder Trail
//Adam Gossett
//Austin Satkowiak
//Natalia Andreeva
//CSCI-2270 Rhonda Hoenigman
//Final Project
//4/27/2016









#ifndef Header
#define Header

#include <iostream>
#include<cstdlib>
#include<string>
#include<vector>
#include<fstream>
#include<sstream>
using namespace std;



class character
{
public:
bool startgame=false;
string type="";
character();
void setcharacter(int hp, int st, int lu ,int inte, int str, int mon);
void stats();
void shop();
void displaymainmenu();
void introscene();
void createcharacter();
void clearscreen();
void choosepace();
void showhighscore();
void rest();

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
        void addVertex(string name, std::string state);
        void loadEdgeFile(string fname);
        void loadVertexFile(string fname);
        void displayEdges();
        void playgame();
        vector<vertex> vertices;


private:

string currentlocation;
string name;
int health;
int food;
int stamina;
int luck;
int intelligence;
int strength;
int money;
int gas;
int day;
};


#endif
