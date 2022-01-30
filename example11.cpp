#include<iostream>
#include<fstream>
using namespace std;
main()
{
    int count=0;
    string  line;
    fstream newfile;
    newfile.open("english.txt",ios::in);
    while(!newfile.eof())
    {
        getline(newfile,line);
        count=count+1;
    }
    cout<<"total lines are:"<<count;
    newfile.close();
}
