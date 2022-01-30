#include<iostream>
#include<fstream>
using namespace std;
main()
{
    char ch;
    fstream newfile;
    newfile.open("english.txt",ios::in);
    while(!newfile.eof())
    {
        newfile>>ch;
        cout<<ch;
    }
    newfile.close();
}
