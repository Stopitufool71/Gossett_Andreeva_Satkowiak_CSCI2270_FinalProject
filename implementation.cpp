#include"header.h"
using namespace std;


void character::stats()
{
    string thestate;
        for(int i = 0; i < vertices.size(); i++){
        if(vertices[i].name == currentlocation)
        {
            thestate=vertices[i].state;
        }
        }
cout<< "Current Location: " << currentlocation<<", "<< thestate<<endl;
cout<< "Day: "<<day<<endl;

cout<< "Health: "<< health<<endl;
cout<< "Gas: " << gas<< " gallons" << endl;
cout<< "Money: " << money << " dollars" <<endl;
}
 void character::playgame()
 {
     int i=0;
     int j=0;
     for(i=0;i<vertices.size();i++)
     {
         cout<<i<<vertices[i].name<<endl;
     }
     cout<< vertices[20].adj[0].v->name;

     while(currentlocation!="NewHaven")
     {
    int choice=0;
    int ca=0;
    i=0;
    for(i=0;i<vertices.size();i++)
    {
        if(vertices[i].name==currentlocation)
            break;
    }
    if(vertices[i].adj.size()==1&&vertices[i].adj[0].visited==false) //case 1
    {
        stats();
        cout<<"case 1"<<endl;
        cout<<"i"<<i<<endl;
        ca=1;
        cout<<"1. Travel to: "<<vertices[i].adj[0].v->name<<", "<< vertices[i].adj[0].v->state <<" via "<< vertices[i].adj[0].road<<endl;
        cout<<"2. Rest"<<endl;
        cout<<"3. Shop"<<endl;
    }

    if(vertices[i].adj.size()==3&&vertices[i].adj[0].visited==true) //case 2
    {
        stats();
        cout<<"case 2"<<endl;
        cout<<"i "<< i<<endl;
        ca=2;
        cout<<"1. Travel to: "<<vertices[i].adj[1].v->name<<", "<< vertices[i].adj[1].v->state <<" via "<< vertices[i].adj[1].road<<endl;
        cout<<"2. Travel to: "<<vertices[i].adj[2].v->name<<", "<< vertices[i].adj[2].v->state <<" via "<< vertices[i].adj[2].road<<endl;
        cout<<"3. Rest"<<endl;
        cout<<"4. Shop"<<endl;
    }

    if(vertices[i].adj.size()==2&&vertices[i].adj[0].visited==true) //case 3
    {
        stats();
        cout<<"Case3"<<endl;
        cout<<"I "<< i<<endl;
        ca=3;
        cout<<"1. Travel to: "<<vertices[i].adj[1].v->name<<", "<< vertices[i].adj[1].v->state <<" via "<< vertices[i].adj[1].road<<endl;
        cout<<"2. Rest"<<endl;
        cout<<"3. Shop"<<endl;
    }

    cin>>choice;

    if(ca==1&&choice==1)
    {
        currentlocation=vertices[i].adj[0].v->name;
        vertices[i].adj[0].visited=true;
    }

    if(ca==2&&choice==1)
    {
        currentlocation=vertices[i].adj[1].v->name;
        vertices[i].adj[1].visited=true;
    }

    if(ca==2&&choice==2)
    {
        currentlocation=vertices[i].adj[2].v->name;
        vertices[i].adj[2].visited=true;
    }

    if(ca==3&&choice==1)
    {
        currentlocation=vertices[i].adj[1].v->name;
        vertices[i].adj[1].visited=true;
    }


     }

 }


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
cout <<  endl;
cout<<"         =====         =    =    =  =                                       "<<endl;
cout<<"           =   ===       = =   ===  =    ===                             "<<endl;
cout<<"           =   = =        =    = =  =    ==                         "<<endl;
cout<<"           =   ===        =    ===  ===  ===                        "<<endl;
cout<<"                                                                "<<endl;
cout << "        =====           =  =     " << endl;
cout << "          =          =     =     " << endl;
cout << "          =   ===  ===  =  =     " << endl;
cout << "          =   =    = =  =  =     " << endl;
cout << "          =   =    ===  =  ====  " << endl;
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

int choice=0;
cin>>choice;
if(choice!=5)
{

   if(choice==1)
   {
    startgame=true;
   }

    if(choice==2)
    {
    cout<<"High Scores"<<endl;
    }

    if(choice==3)
    {
    cout<<"Options"<<endl;
    }
    if(choice==4)
    {
        string line;
        cout<<endl;
    cout<<"_________________________________CREATED BY_________________________________"<<endl;
    cout<<"_______________________________NAA-way Studios______________________________"<<endl;
    cout<< "________________________________Adam Gossett_______________________________" <<endl;
    cout<<"______________________________Austin Satkowiak______________________________"<<endl;
    cout<<"______________________________Natalia Andreeva______________________________"<<endl;
    cout<<"____________________________________________________________________________"<<endl;
    cout<<"______________________________Rhonda Hoenigman______________________________"<<endl;
    cout<<"_________________________________CSCI-2270__________________________________"<<endl;
    cout<<"_________________________________4/27/2016__________________________________"<<endl;
    cout<<endl;
    cout<<"__________________________Press Return To Continue__________________________"<<endl;
    cin.ignore();
    cin.get();
    displaymainmenu();
}
if (choice==5)
{
    cout<<"Goodbye!"<<endl;
    exit(1);
}
if (choice>5||choice<0)
{
    cout<<"Choice not Avaliable"<<endl;
    displaymainmenu();
}
}
}

void character::introscene()
{
cout<<"Background: It is the end of the Spring Semester and you have just graduated"<<endl;
cout<<"from CU, You miraculously still have $50,000 saved up that you want to spend on"<<endl;
cout<<"getting a graduate degree from Yale. You have 48 hours to travel from Boulder";
cout<<"to New Haven, Conneticut without running out of money,"<<endl;
cout<<"becoming stranded, or even dying. Good Luck!"<<endl;
cout<<"Press Enter to Continue"<<endl;
cin.ignore();
cin.get();
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
    type="Engineer";
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
    type="Med";
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
    type="Business";
    }
        if(majorchoice==4)
    {
    loop=true;
    cout<<"Engineering: You start with very high intelligence, high stamina, low strength, and medium luck. You also have perks to fix things."<<endl;
    cout<<"Medical: You start with extra health, high intelligence, medium stamina,\nmedium strength, and medium luck. You also have perks to heal yourself and others."<<endl;
    cout<<"Business: You start with medium intelligence, low stamina, high strength \nand high luck. You have perks to make money on the road."<<endl;
    cout<<"Press Enter to Continue"<<endl;
    cin.ignore();
    cin.get();

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

character::setcharacter(int hp, int st, int lu, int inte, int str, int mon)
{
health=hp;
stamina=st;
luck=lu;
intelligence=inte;
strength=str;
money=mon;
gas=30;
day=1;
currentlocation="Boulder";
}

void character:: addEdge(string v1, string v2, int weight, string road){

    for(int i = 0; i < vertices.size(); i++){
        if(vertices[i].name == v1){
            for(int j = 0; j < vertices.size(); j++){
                if(vertices[j].name == v2 && i != j){
                    adjVertex av;
                    av.v = &vertices[j];
                    av.weight = weight;
                    av.road=road;
                    av.visited=false;
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
void character::addVertex(string n,string s){
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

void character::displayEdges(){
    //loop through all vertices and adjacent vertices
    for(int i = 0; i < vertices.size(); i++){
        cout<<vertices[i].name<<"-->";
        for(int j = 0; j < vertices[i].adj.size(); j++){
            cout<<vertices[i].adj[j].v->name<<"***";
        }
        cout<<endl;
    }

}


