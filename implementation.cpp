#include"header.h"
using namespace std;

void character::clearscreen()
{
cout<< string(50, '\n');
}

void character::displaymainmenu()
{
cout << "================================================================================"<<endl;
cout <<                                                                                     endl;
cout << "         =====  =            ===               =       =                     "<<endl;
cout << "           =    =__          =  =  ====  =  =  =       =                      " << endl;
cout << "           =    = =   ==     ===   =  =  =  =  =     ===  ==    ===          "    << endl;
cout << "           =    = =   = ==   =  =  =  =  =  =  =     = =  = ==  =             " << endl;
cout << "           =    = =    ==    ===   ====  ====  ====  ===   ==   =            " << endl;
cout << "     " << endl;
cout << "                            =====           =  =     " << endl;
cout << "                              =          =     =     " << endl;
cout << "                              =   ===  ===  =  =     " << endl;
cout << "                              =   =    = =  =  =     " << endl;
cout << "                              =   =    ===  =  ====  " << endl;
cout <<endl;
cout << "================================================================================"<<endl;
cout<<"                            Press Enter To Continue                          ";
cin.get();
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"--------------------------------MAIN MENU---------------------------------------"<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"                               1. New Game"<<endl;
cout<<"                               2. High-Scores"<<endl;
cout<<"                               3. Options"<<endl;
cout<<"                               4. View Credits"<<endl;
cout<<"                               5. Exit"<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"                               Your Choice:";
}

void character::introscene()
{
string line;
cout<<"Background: It is the end of the Spring Semester and you have just graduated"<<endl;
cout<<"from CU, You miraculously still have $50,000 saved up that you want to spend on"<<endl;
cout<<"getting a graduate degree from Yale. You have 48 hours to travel from Boulder";
cout<<"to New Haven, Conneticut without running out of money,"<<endl;
cout<<"becoming stranded, or even dying. Good Luck!"<<endl;
}

void character::createcharacter()
{
bool loop = true;
int majorchoice=0;

    while(loop==true)
    {
    cout<<"Create Your Character!"<<endl;
    cout<<"Majors:"<<endl;
    cout<<"1. Engineering"<<endl;
    cout<<"2. Medical"<<endl;
    cout<<"3. Business"<<endl;
    cout<<"4. What do these choices mean?" <<endl;
    cin>>majorchoice;
    if(majorchoice==1)
    {
    loop=false;
    cout<<"Your an Engineer!"<<endl;
    cout<<"Health: 100"<<endl;
    cout<<"Stamina: 7"<<endl;
    cout<<"Luck: 3"<<endl;
    cout<<"Intelligence: 10"<<endl;
    cout<<"Strength: 2"<<endl;
    character(100,7,3,10,2,50000,true, false, false);
    }
        if(majorchoice==2)
    {
    loop=false;
    cout<<"Your an Med Student!"<<endl;
    cout<<"Health: 120"<<endl;
    cout<<"Stamina: 5"<<endl;
    cout<<"Luck: 5"<<endl;
    cout<<"Intelligence: 8"<<endl;
    cout<<"Strength: 5"<<endl;
    character(120,5,5,8,5,50000, false, true, false);
    }
        if(majorchoice==3)
    {
    loop=false;
    cout<<"Your an Business man!"<<endl;
    cout<<"Health: 100"<<endl;
    cout<<"Stamina: 3"<<endl;
    cout<<"Luck: 9"<<endl;
    cout<<"Intelligence: 4"<<endl;
    cout<<"Strength: 8"<<endl;
    character(100,3,9,4,8,50000, false, false, true);
    }
        if(majorchoice==4)
    {
    loop=true;
    cout<<"Engineering: You start with very high intelligence, high stamina, low strength, and medium luck. You also have perks to fix things."<<endl;
    cout<<"Medical: You start with extra health, high intelligence, medium stamina,\nmedium strength, and medium luck. You also have perks to heal yourself and others."<<endl;
    cout<<"Business: You start with medium intelligence, low stamina, high strength \nand high luck. You have perks to make money on the road."<<endl;

    }
        if(majorchoice>4 || majorchoice<0)
        {
        loop=true;
        cout<<"Invalid Input"<<endl;
        }
    }
}

character::character()
{

}

character::character(int health, int stamina, int luck, int intelligence, int strength, int money, bool engineeringperk, bool medicalperk, bool businessperk)
{
health=health;
stamina=stamina;
luck=luck;
intelligence=intelligence;
strength=strength;
money=money;
engineeringperk=engineeringperk;
businessperk=businessperk;
medicalperk=medicalperk;
}

Graph::Graph()
{

}

Graph::~Graph()
{
    //dtor
}
void Graph::addEdge(string v1, string v2, int weight, string road){

    for(int i = 0; i < vertices.size(); i++){
        if(vertices[i].name == v1){
            for(int j = 0; j < vertices.size(); j++){
                if(vertices[j].name == v2 && i != j){
                    adjVertex av;
                    av.v = &vertices[j];
                    av.weight = weight;
                    av.road=road;
                    vertices[i].adj.push_back(av);
                    //another vertex for edge in other direction
                    adjVertex av2;
                    av2.v = &vertices[i];
                    av2.weight = weight;
                    vertices[j].adj.push_back(av2);
                }
            }
        }
    }
}
void Graph::addVertex(string n,string s){
    bool found = false;
    for(int i = 0; i < vertices.size(); i++){
        if(vertices[i].name == n){
            found = true;
            cout<<vertices[i].name<<" found."<<endl;
        }
    }
    if(found == false){
        vertex v;
        v.name = n;
        v.state=s;
        vertices.push_back(v);

    }
}

void Graph::displayEdges(){
    //loop through all vertices and adjacent vertices
    for(int i = 0; i < vertices.size(); i++){
        cout<<vertices[i].name<<"-->";
        for(int j = 0; j < vertices[i].adj.size(); j++){
            cout<<vertices[i].adj[j].v->name<<"***";
        }
        cout<<endl;
    }

}
