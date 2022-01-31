#include<iostream>
#include<fstream>
using namespace std;
main()
{
    int count=0;
    string  line;
    char ch;
    cout<<"frequency of:";
    cin>>ch;
    fstream newfile;
    newfile.open("english1.txt",ios::in);
    int x=0;     
    while(!newfile.eof())
    {
        getline(newfile,line);
        newfile>>line;
        int i=0;
        while(line[i] != '\0')
        {
            if(ch == line[i])
            {
                count=count+1;
            }
            i++;
        }
        x++;
    }  
    newfile.close();
    cout<<"total lines are:"<<count;
}
