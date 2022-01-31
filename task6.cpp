#include<iostream>
#include<fstream>
using namespace std;
string line;
fstream newfile;
string display_words(string line);
main()
{
    int count;
    string name;
    string ch;
    newfile.open("story.txt",ios::in);
    while(!newfile.eof())
    {
        newfile>>ch;
        display_words(ch);       
    }
    
}
string display_words(string line)
{
    int count=0;
    for(int i=0;line[i]!='\0';i++)
    {
        count++;
        
    }
    if(count < 4)
    {
        cout<<line<<endl;
    }
    return "0";
}