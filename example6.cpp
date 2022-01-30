#include<iostream>
#include<fstream>
using namespace std;
main()
{
    char ch;
    fstream newfile;
    newfile.open("character.txt",ios::in);
    newfile>>ch;
    cout<<"character is "<<ch;
    newfile.close();
}