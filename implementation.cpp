// The Boulder Trail
//Adam Gossett
//Austin Satkowiak
//Natalia Andreeva
//CSCI-2270 Rhonda Hoenigman
//Final Project
//4/27/2016






#include"implementation.h"
using namespace std;


void character::rest()
{
    int choice=0;
clearscreen();
cout<<"1 day of rest = 20 hp (max hp = 120)"<<endl;
cout<<"Rest for how many days?"<<endl;
cin>>choice;
if(choice<0)
{
   cout<< "Cannot rest for negative days"<<endl;
   rest();
}
else
{
    day=day+choice;
    if((120-health)<(choice*20))
    {
        health=120;
    }
    else
    {
        health=health+(choice*20);
    }
}
}

void character::showhighscore()
{
    string line;
    int i=1;
    int thescore;
    int count=0;
    ifstream instream;
    instream.open("highscores.txt");
    if(instream.fail())
    {
        cout<<"Error opening file" << endl;
        exit(1);
    }
    cout<<"Highscores"<<endl;
    while(!instream.eof())
{
    getline(instream,line);
    cout<<i<<" "<<line<<endl;
    i++;
}
cout<<endl;
    cout<<"Press Enter to Continue"<<endl;
    cin.ignore();
    cin.get();

    displaymainmenu();
    instream.close();

}
void character::shop()
{
    clearscreen();
    int choice=0;
    int choice2=0;
    string choice3="";

    cout<<"Welcome to the Corner Store!"<<endl;
    cout<<"1. Buy Food"<<endl;
    cout<<"2. Buy Gas"<<endl;
    cin>>choice;
    if(choice==1)
    {
        cout<<"5$ per ration"<<endl;
        cout<<"How much food?"<<endl;
        cin>>choice2;
        cout<<"Price: "<<5*choice2<<endl;
        cout<<"Buy? y/n"<<endl;
        cin>>choice3;
        if(choice3=="Y"||choice3=="y")
        {
        if(money>choice2*5)
        {
        food=choice2+food;
        money=money-(choice2*5);
        }
        else
        {
        cout<<"Not enough money :-("<<endl;
        }
        }
        else
        {
            cout<<"Goodbye!"<<endl;
        }

    }
    if(choice==2)
    {
        cout<<"3$ per gallon"<<endl;
        cout<<"Fill up? y/n"<<endl;
        cin>>choice3;
        if(choice3=="Y"||choice3=="y")
        {
        cout<<"Price: "<<((30-gas)*3)<<endl;
        cout<<"Buy? y/n"<<endl;

        cin>>choice3;
        if(choice3=="Y"||choice3=="y")
        {
            money=money-((30-gas)*3);
            gas=30;
        }
        else
        {
            cout<<"Goodbye!"<<endl;
        }
        }
        else
        {
            cout<<"Goodbye!"<<endl;
        }
    }
}


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
cout<< "Food: "<< food<<endl;
cout<< "Gas: " << gas<< " gallons" << endl;
cout<< "Money: " << money << " dollars" <<endl;
}
 void character::playgame()
 {
int i=0;
int j=0;
int choice=0;
int casee=0;

        while(currentlocation!="New Haven")
        {
        for(i=0;i<vertices.size();i++)
        {
        if(vertices[i].name==currentlocation)
        {
            j=i;
        }
        }
        if(vertices[j].adj.size()==1&&vertices[j].adj[0].visited==false)
        {
        casee=1;
        stats();
        cout<<"1. Travel to: "<<vertices[j].adj[0].v->name<<", "<< vertices[j].adj[0].v->state <<" via "<< vertices[j].adj[0].road<<endl;
        cout<<"2. Rest"<<endl;
        cout<<"3. Shop"<<endl;
        }

        if(vertices[j].adj.size()==2&&vertices[j].adj[0].visited==true)
        {
        casee=2;
        stats();
        cout<<"1. Travel to: "<<vertices[j].adj[1].v->name<<", "<< vertices[j].adj[1].v->state <<" via "<< vertices[j].adj[1].road<<endl;
        cout<<"2. Rest"<<endl;
        cout<<"3. Shop"<<endl;
        }
        cin>>choice;
        if(casee==1&&choice==1)
        {
            if(gas>((vertices[j].adj[0].weight)/26))
            {
            currentlocation=vertices[j].adj[0].v->name;
            vertices[j].adj[0].visited=true;
            day++;
            gas=(gas-((vertices[j].adj[0].weight)/26));
            food=food-3;
            }
            else if(gas<((vertices[j].adj[0].weight)/26))
            {
                cout<<"Not Enough Gas"<<endl;
            }
        }
        if(choice==2)
        {
            rest();
        }
        if(choice==3)
        {
            shop();
        }
        if(casee==2&&choice==1)
        {
            if(gas>((vertices[j].adj[1].weight)/26))
            {
            currentlocation=vertices[j].adj[1].v->name;
            vertices[j].adj[1].visited=true;
            day++;
            gas=(gas-((vertices[j].adj[1].weight)/26));
            food=food-3;
            }
            else if(gas<((vertices[j].adj[1].weight)/26))
            {
                cout<<"Not Enough Gas"<<endl;
            }
        }
        if(food==-1)
        {
            health=health-15;
            food=0;
        }
        if(food==-2)
        {
            health=health-30;
            food=0;
        }
        if(food==-3)
        {
            health=health-45;
            food=0;
        }
        if(health<0)
        {
            cout<<"You didn't eat and now you're dead!"<<endl;
                cout<<"Your score: "<<(money/day)<<endl;
            break;
        }
        }
        if(currentlocation=="New Haven")
        {
    cout<<"Congratulations You made it to Yale!"<<endl;
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
cout << "           =    =            =  =  ====  =  =  =       =                      " << endl;
cout << "           =    = =   ===    ===   =  =  =  =  =     ===  ===  ===          "    << endl;
cout << "           =    = =   ==     =  =  =  =  =  =  =     = =  ==   =             " << endl;
cout << "           =    = =   ===    ===   ====  ====  ====  ===  ===  =            " << endl;
cout <<  endl;
cout<<"         =====         =    =       =                                       "<<endl;
cout<<"           =   ===       = =   ===  =    ===                             "<<endl;
cout<<"           =   = =        =    ===  =    ==                         "<<endl;
cout<<"           =   ===        =    = =  ===  ===                        "<<endl;
cout<<"                                                                "<<endl;
cout << "         =====           =  =             " << endl;
cout << "           =                =      " << endl;
cout << "           =   ===  ===  =  =              By:" << endl;
cout << "           =   =    ===  =  =              Adam Gossett" << endl;
cout << "           =   =    = =  =  ====           Austin Satkowiak" << endl;
cout <<"                                           Natalia Andreeva  "<<endl;
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
cout<<"                               3. View Credits"<<endl;
cout<<"                               4. Exit"<<endl;
cout<<endl;
cout<<endl;
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

   if(choice==1)
   {
    startgame=true;
   }

    if(choice==2)
    {
    showhighscore();
    }

    if(choice==3)
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
    clearscreen();
    displaymainmenu();

}
if(choice==4)
{
    cout<<"Goodbye!";
    exit(0);
}
if (choice>4||choice<0)
{
    cout<<"Choice not Avaliable"<<endl;
    cout<<"Press Enter to Continue"<<endl;
    cin.ignore();
    cin.get();
    clearscreen();
    displaymainmenu();
}


}

void character::introscene()
{
cout<<"Background: It is the end of the Spring Semester and you have just graduated"<<endl;
cout<<"from CU, You miraculously still have $50,000 saved up that you want to spend on"<<endl;
cout<<"getting a graduate degree from Yale. The faster you make it"<<endl;
cout<<"to New Haven, Conneticut without running out of money,"<<endl;
cout<<"becoming stranded, or even dying the better your score."<<endl;
cout<<"You car has a 30 gallon tank and a constant 30mpg giving you a range of 900mi"<<endl;
cout<<"Each day you will use 3 rations of food"<<endl;
cout<<"If you run out of gas you will lose 1 day and $100"<<endl;
cout<<"If you run out of food you will lose 15hp for each meal missed"<<endl;
cout<<"If you run out of health you die!"<<endl;
cout<<"Good Luck!"<<endl;
cout<<"Press Enter to Continue"<<endl;
cin.ignore();
cin.get();
clearscreen();
}

void character::createcharacter()
{
bool loop = true;
int majorchoice=0;
char yourname[256]="";

    cout<<"Create Your Character!"<<endl;
    cout<<"Your name?"<<endl;
    cin.getline(yourname,256);
    name=yourname;
    cout<<"Hi "<< name<<endl<<endl;

    while(loop==true)
    {

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
    clearscreen();
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
    cout<<"Press Enter to Continue"<<endl;
    cin.ignore();
    cin.get();
    clearscreen();
}

character::character()
{

}

void character::setcharacter(int hp, int st, int lu, int inte, int str, int mon)
{
health=hp;
stamina=st;
luck=lu;
intelligence=inte;
strength=str;
money=mon;
gas=30;
day=1;
food=10;
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


