// The Boulder Trail
//Adam Gossett
//Austin Satkowiak
//Natalia Andreeva
//CSCI-2270 Rhonda Hoenigman
//Final Project
//4/27/2016

#include"implementation.h"

int main()
{
    character player;

    player.loadVertexFile("cities.txt");
    player.loadEdgeFile("roads.txt");

    player.displaymainmenu();

    if(player.startgame=true)
    {
        player.introscene();
        player.createcharacter();

        if(player.type=="Engineer")
        {
        player.setcharacter(100,7,3,10,2,50000);
        }
        else if(player.type=="Med")
        {
            player.setcharacter(120,5,5,8,5,50000);
        }
        else
        {
            player.setcharacter(100,3,9,4,8,50000);
        }

        player.playgame();
    }
    return 0;
}
