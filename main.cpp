
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
player.addVertex("Gary", "Indiana");
player.addVertex("South Bend", "Illinois");
player.addVertex("Toledo", "Ohio");
player.addVertex("Cleveland", "Ohio");
player.addVertex("Stroudsburg", "Pennsylvania");
player.addVertex("Denville", "New Jersey");
player.addVertex("Mahwah", "New Jersey");
player.addVertex("GreenWich", "Conneticut");
player.addVertex("Bridgeport", "Conneticut");
player.addVertex("Newhaven", "Conneticut");

player.addVertex("Limon","Colorado");
player.addVertex("Burlington","Colorado");
player.addVertex("Oakley","Kansas");
player.addVertex("Hays","Kansas");
player.addVertex("Junction City","Kansas");
player.addVertex("Topeka","Kansas");
player.addVertex("Kansas City","Missouri");
player.addVertex("Columbia","Missouri");
player.addVertex("St. Louis","Missouri");
player.addVertex("Effingham","Illinois");
player.addVertex("Terre Haute","Indiana");
player.addVertex("Indianapolis","Indiana");
player.addVertex("Richmond","Indiana");
player.addVertex("Dayton","Ohio");
player.addVertex("Columbus","Ohio");
player.addVertex("Zanesville","Ohio");
player.addVertex("Wheeling","West Virginia");
player.addVertex("Washington","Pennsylvania");
player.addVertex("New Stanton","Pennsylvania");
player.addVertex("Bedford","Pennsylvania");
player.addVertex("Harrisburg","Pennsylvania");
player.addVertex("Allentown","Pennsylvania");
player.addVertex("Bridgewater","New Jersey");
player.addVertex("Parsippany-Troy Hills","New Jersey");

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
player.addEdge("Joliet","Gary", 43,"Interstate 80");
player.addEdge("Gary","South Bend", 67,"Interstate 90");
player.addEdge("South Bend","Toledo", 157,"Interstate 80");
player.addEdge("Toledo","Cleveland", 118,"Interstate 90");
player.addEdge("Cleveland","Stroudsburg", 388,"Interstate 80");
player.addEdge("Stroudsburg","Denville", 45,"Interstate 80");
player.addEdge("Denville","Mahwah", 33,"Interstate 287");
player.addEdge("Mahwah","Greenwich", 35,"Interstate 287");
player.addEdge("Greenwich","Bridgeport", 29,"Interstate 95");
player.addEdge("Bridgeport","New Haven", 19,"CT-15");

player.addEdge("Denver","Limon",91, "Interstate 70");
player.addEdge("Limon","Burlington", 78,"Interstate 70");
player.addEdge("Burlington","Oakley", 89,"Interstate 70");
player.addEdge("Oakley","Hays", 88,"Interstate 70");
player.addEdge("Hays","Junction city", 139,"Interstate 70");
player.addEdge("Junction City","Topeka", 64,"Interstate 70");
player.addEdge("Topeka","Kansas City", 65,"Interstate 70");
player.addEdge("Kansas City","Columbia", 125,"Interstate 70");
player.addEdge("Columbia","St. Louis", 124,"Interstate 70");
player.addEdge("St. Louis","Effingham", 101,"Interstate 70");
player.addEdge("Effingham","Terre Haute", 68,"Interstate 70");
player.addEdge("Terre Haute","Indianapolis", 77,"Interstate 70");
player.addEdge("Indianapolis","Richmond", 73,"Interstate 70");
player.addEdge("Richmond","Dayton", 49,"Interstate 70");
player.addEdge("Dayton","Columbus", 72,"Interstate 70");
player.addEdge("Columbus","Zanesville", 56,"Interstate 70");
player.addEdge("Zanesville","Wheeling", 74,"Interstate 70");
player.addEdge("Wheeling","Washington", 32,"Interstate 70");
player.addEdge("Washington","New Stanton", 40,"Interstate 70");
player.addEdge("New Stanton","Bedford", 75,"Interstate 70/Interstate 76");
player.addEdge("Bedford","Harrisburg", 102,"Interstate 76");
player.addEdge("Harrisburg","Allentown", 82,"Interstate 81/Interstate 78");
player.addEdge("Allentown","Bridgewater", 60,"Interstate 78");


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
