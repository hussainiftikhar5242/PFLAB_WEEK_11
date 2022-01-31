#include<iostream>
#include<fstream>
using namespace std;
main()
{
    int count=0;
    char ch;
    char character;
    cout<<"location of character:";
    cin>>character;
    fstream newfile;
    newfile.open("english.txt",ios::in);
    while(!newfile.eof())
    {
        newfile>>ch;
        if(character==ch)
        {
            break;
        }
        
        count=count+1;
    }
    cout<<count;
    
    newfile.close();
}
