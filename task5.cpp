#include<iostream>
#include<fstream>
using namespace std;
main()
{
    int count=0;
    string line;
    int count1=0;
    fstream newfile;
    char ch;
    newfile.open("story.txt",ios::in);
    while(!newfile.eof())
    {
        getline(newfile,line);
        newfile>>line;
        if(line[0] != 'T')
        count++;    
        
    }
    cout<<"lines are:"<<count;
    newfile.close();
}