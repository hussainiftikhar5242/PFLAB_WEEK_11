#include<iostream>
#include<fstream>
using namespace std;
main()
{
    fstream newfile;
    newfile.open("my.txt",ios::out);
    string line="hussain iftikhar";
    newfile<<line;
    newfile.close();
}