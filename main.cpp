
#include"header.h"

int main()
{
int choice=0;
displaymainmenu();
cin>>choice;

if(choice!=5)
{

   if(choice==1)
   {
    introscene();
    createcharacter();
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
    cout<<"View Credits"<<endl;
    }






}
else
{
    cout<<"Good Bye!"<<endl;
}


citynode * root= new citynode;
root->name="Boulder";
root->weather="Windy";
root->parent=NULL;
root->left=NULL;
root->right=NULL;





return 0;
}
