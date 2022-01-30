#include<iostream>
#include<fstream>
using namespace std;
main()
{
    fstream newfile;
    float number;
    cout<<"enter a float value:";
    cin>>number;
    newfile.open("float.txt",ios::out);
    newfile<<number;
    newfile.close();
}