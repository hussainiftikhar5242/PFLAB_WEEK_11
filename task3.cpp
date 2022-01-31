#include<iostream>
#include<fstream>
using namespace std;
main()
{
    fstream newfile;
    string line="hussain";
    newfile.open("addline.txt",ios::app);
    newfile<<line<<endl;
    newfile.close();
    
}