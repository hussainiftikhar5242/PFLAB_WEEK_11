#include<iostream>
#include<fstream>
using namespace std;
main()
{
    fstream newfile;
    char character;
    cout<<"enter a character:";
    cin>>character;
    newfile.open("character.txt",ios::out);
    newfile<<character;
    newfile.close();
}