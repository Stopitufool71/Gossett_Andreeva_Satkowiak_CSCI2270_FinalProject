// The Boulder Trail
//Adam Gossett
//Austin Satkowiak
//Natalia Andreeva
//CSCI-2270 Rhonda Hoenigman
//Final Project
//4/27/2016






#include"header.h"

int main()
{
character player;



player.addVertex("Boulder","Colorado");
player.addVertex("Denver", "Colorado");
player.addVertex("Lochbuie", "Colorado");
player.addVertex("Fort Morgan", "Colorado");
player.addVertex("Sterling", "Colorado");
player.addVertex("Ogallala", "Nebraska");
player.addVertex("Lexington", "Nebraska");
player.addVertex("Lincoln", "Nebraska");
player.addVertex("Omaha", "Nebraska");
player.addVertex("Des Moines", "Iowa");
player.addVertex("Iowa City", "Iowa");
player.addVertex("Davenport", "Iowa");
player.addVertex("Joliet", "Illinois");
player.addVertex("South Bend", "Illinois");
player.addVertex("Toledo", "Ohio");
player.addVertex("Cleveland", "Ohio");
player.addVertex("Pittsburg", "Pennsylvania");
player.addVertex("Harrisburg", "Pennsylvania");
player.addVertex("New York", "New York");
player.addVertex("New Haven", "Conneticut");



player.addEdge("Boulder","Denver",28,"US Highway 36");
player.addEdge("Denver","Lochbuie",21,"Interstate 76");
player.addEdge("Lochbuie","Fort Morgan",57,"Interstate 76");
player.addEdge("Fort Morgan","Sterling",444 ,"Interstate 80");
player.addEdge("Sterling","Ogallala",315 ,"Interstate 80");
player.addEdge("Ogallala","Lexington",113,"Interstate 80");
player.addEdge("Lexington","Lincoln",169 ,"Interstate 80");
player.addEdge("Lincoln","Omaha",52 ,"Interstate 80");
player.addEdge("Omaha","Des Moines", 138,"Interstate 80");
player.addEdge("Des Moines","Iowa City", 114,"Interstate 80");
player.addEdge("Iowa City","Davenport", 59,"Interstate 80");
player.addEdge("Davenport","Joliet", 145,"Interstate 80");
player.addEdge("Joliet","South Bend",101,"Interstate 90");
player.addEdge("South Bend","Toledo", 157,"Interstate 80");
player.addEdge("Toledo","Cleveland", 118,"Interstate 90");
player.addEdge("Cleveland","Pittsburg", 134,"Interstate 76-E");
player.addEdge("Pittsburg", "Harrisburg", 203, "Interstate 76-E");
player.addEdge("Harrisburg", "New York", 170, "Interstate 78-E");
player.addEdge("New York", "New Haven", 81, "Interstate 95" );




player.displaymainmenu();

if(player.startgame=true)
{
    player.introscene();
    player.createcharacter();
    if(player.type=="Engineer")
    {
    player.setcharacter(100,7,3,10,2,50000);
    }
    if(player.type=="Med")
    {
        player.setcharacter(120,5,5,8,5,50000);
    }
    if(player.type=="Business")
    {
        player.setcharacter(100,3,9,4,8,50000);
    }
    player.playgame();
}



return 0;
}
