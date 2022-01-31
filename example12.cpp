#include<iostream>
#include<fstream>
using namespace std;
main()
{
    int count=0;
    char ch;
    fstream newfile;
    newfile.open("english.txt",ios::in);
    while(!newfile.eof())
    {
        newfile>>ch;
        cout<<ch<<endl;
        count=count+1;
    }
    cout<<"total characters are:"<<count<<endl;
    newfile.close();
}
