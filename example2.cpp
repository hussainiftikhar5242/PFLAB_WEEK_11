#include<iostream>
#include<fstream>
using namespace std;
main()
{
    fstream newfile;
    int number;
    cout<<"enter a number:";
    cin>>number;
    newfile.open("integer.txt",ios::out);
    newfile<<number;
    newfile.close();
}
