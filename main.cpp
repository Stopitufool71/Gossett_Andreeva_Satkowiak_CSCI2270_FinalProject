
#include"header.h"

int main()
{
character player;
int choice=0;
place1:
player.displaymainmenu();
cin>>choice;

Graph g;

g.addVertex("Boulder","Colorado");
g.addVertex("Denver", "Colorado");
g.addVertex("Lochbuie", "Colorado");
g.addVertex("Fort Morgan", "Colorado");
g.addVertex("Sterling", "Colorado");
g.addVertex("Ogallala", "Nebraska");
g.addVertex("Lexington", "Nebraska");
g.addVertex("Lincoln", "Nebraska");
g.addVertex("Omaha", "Nebraska");
g.addVertex("Des Moines", "Iowa");
g.addVertex("Iowa City", "Iowa");
g.addVertex("Davenport", "Iowa");
g.addVertex("Joliet", "Illinois");
g.addVertex("Gary", "Indiana");
g.addVertex("South Bend", "Illinois");
g.addVertex("Toledo", "Ohio");
g.addVertex("Cleveland", "Ohio");
g.addVertex("Stroudsburg", "Pennsylvania");
g.addVertex("Denville", "New Jersey");
g.addVertex("Mahwah", "New Jersey");
g.addVertex("GreenWich", "Conneticut");
g.addVertex("Bridgeport", "Conneticut");
g.addVertex("Westhaven", "Conneticut");

g.addEdge("Boulder","Denver",28,"US Highway 36");
g.addEdge("Denver","Lochbuie",21,"Interstate 76");
g.addEdge("Lochbuie","Fort Morgan",57,"Interstate 76");
g.addEdge("Fort Morgan","Sterling",444 ,"Interstate 80");
g.addEdge("Fort Morgan","Sterling",458 ,"US Highway 36-E");
g.addEdge("Sterling","Ogallala",315 ,"Interstate 80");
g.addEdge("Ogallala","Lexington",113,"Interstate 80");
g.addEdge("Lexington","Lincoln",169 ,"Interstate 80");
g.addEdge("Lincoln","Omaha",52 ,"Interstate 80");
g.addEdge("Lincoln","Omaha",65 ,"US Highway 77");
g.addEdge("","", ,"");
g.addEdge("","", ,"");
g.addEdge("","", ,"");
g.addEdge("","", ,"");
g.addEdge("","", ,"");
g.addEdge("","", ,"");
g.addEdge("","", ,"");
g.addEdge("","", ,"");





if(choice!=5)
{

   if(choice==1)
   {
    player.introscene();
    player.createcharacter();
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
    goto place1;
}
else
{
    cout<<"Good Bye!"<<endl;
}
}



return 0;
}
