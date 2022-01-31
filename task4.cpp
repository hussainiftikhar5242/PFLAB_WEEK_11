#include<iostream>
#include<fstream>
using namespace std;
void calldata();
void storedata();
fstream newfile;
string name,schoolname,collegename;
int age;
int matric,fsc,ecat;
main()
{
    calldata();
    storedata();
    
}
void calldata()
{
    cout<<"enter name:";
    cin>>name;
    cout<<"enter college name:";
    cin>>collegename;
    cout<<"enter school name:";
    cin>>schoolname;
    cout<<"enter age:";
    cin>>age;
    cout<<"enter fsc marks:";
    cin>>fsc;
    cout<<"enter matric marks:";
    cin>>matric;
    cout<<"enter ecat marks:";
    cin>>ecat;
}
void storedata()
{
    newfile.open("student.txt",ios::out);
    newfile<<"name"<<"\t"<<"collegename"<<"\t"<<"scholl name"<<"\t"<<"age"<<"\t"<<"fsc marks"<<"\t"<<"matric marks:"<<"\t"<<"ecat marks:"<<endl;
    newfile<<name<<"\t"<<collegename<<"\t"<<schoolname<<"\t"<<age<<"\t"<<fsc<<"\t"<<matric<<"\t"<<ecat<<endl;
    newfile.close();
}
