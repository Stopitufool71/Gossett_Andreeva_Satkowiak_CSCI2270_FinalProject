#ifndef Header
#define Header

#include <iostream>
#include<cstdlib>
#include<string>
#include<vector>
using namespace std;



struct vertex;

struct adjVertex{
    vertex *v;
    int weight;
    string road;
};

struct vertex{
    std::string name;
    std::string state;
    std::vector<adjVertex> adj;
};

class Graph
{
    public:
        Graph();
        ~Graph();
        void addEdge(std::string v1, std::string v2, int weight, string road);
        void addVertex(std::string name, std::string state);
        void displayEdges();
    protected:
    private:
        //vector<edge> edges;
        std::vector<vertex> vertices;

};

class character
{
public:
character();
character(int health, int stamina, int luck, int intelligence, int strength, int money, bool, bool, bool);
void displaymainmenu();
void introscene();
void createcharacter();
void clearscreen();


private:
int health;
int stamina;
int luck;
int intelligence;
int strength;
int money;
bool engineeringperk;
bool medicalperk;
bool businessperk;

};


#endif
