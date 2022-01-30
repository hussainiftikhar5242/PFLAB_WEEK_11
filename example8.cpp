#include<iostream>
#include<fstream>
using namespace std;
main()
{
    float number;
    fstream newfile;
    newfile.open("float.txt",ios::in);
    newfile>>number;
    cout<<"float value is:"<<number;
    newfile.close();
}