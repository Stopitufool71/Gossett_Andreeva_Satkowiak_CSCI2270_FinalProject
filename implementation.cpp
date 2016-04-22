#include"header.h"


void displaymainmenu()
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
cout<<"                          ";
system("PAUSE");
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
cout<<"                               2. Load Game"<<endl;
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

void introscene()
{
cout<<"Background: It is the end of the Spring Semester and you have just graduated"<<endl;
cout<<"from CU, You miraculously still have $50,000 saved up that you want to spend on"<<endl;
cout<<"getting a graduate degree from Harvard. You have 90 days to travel from Boulder"<<endl;
cout<<"to Cambridge, Massachusetts without running out of money,"<<endl;
cout<<"becoming stranded, or even dying. Good Luck!"<<endl;
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
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
system("PAUSE");
}

void createcharacter()
{
bool loop = true;
int majorchoice=0;
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
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

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
    character(100,7,3,10,2,50000);
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
    character(120,5,5,8,5,50000);
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
    character(100,3,9,4,8,50000);
    }
        if(majorchoice==4)
    {
    loop=true;
    cout<<"Engineering: You start with very high intelligence, high stamina, low strength, \nand medium luck. You also have perks to fix things."<<endl;
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

character::character(int health, int stamina, int luck, int intelligence, int strength, int money)
{
health=health;
stamina=stamina;
luck=luck;
intelligence=intelligence;
strength=strength;
money=money;
}
