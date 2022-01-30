#include<iostream>
#include<fstream>
using namespace std;
main()
{
    int number;
    fstream newfile;
    newfile.open("integer.txt",ios::in);
    newfile>>number;
    cout<<"number is:"<<number;
    newfile.close();
}