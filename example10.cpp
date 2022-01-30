#include<iostream>
#include<fstream>
using namespace std;
main()
{
    string  line;
    fstream newfile;
    newfile.open("english.txt",ios::in);
    while(!newfile.eof())
    {
        getline(newfile,line);
        cout<<line<<endl;
    }
    newfile.close();
}
