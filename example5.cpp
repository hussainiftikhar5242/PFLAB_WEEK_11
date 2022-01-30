#include<iostream>
#include<fstream>
using namespace std;
main()
{
    string name;
    string grade;
    float cgpa,rollnumber;
    fstream newfile;
    newfile.open("result_card.txt",ios::out);
    cout<<"enter student name:";
    cin>>name;
    cout<<"enter student rollnumber:";
    cin>>rollnumber;
    cout<<"enter student cgpa:";
    cin>>cgpa;
    cout<<"enter student grade:";
    cin>>grade;
    newfile<<"roll number"<<"\t"<<"name:"<<"\t"<<"cgpa"<<"\t"<<"grade"<<endl;
    newfile<<rollnumber<<"\t"<<name<<"\t"<<"\t"<<cgpa<<"\t"<<grade<<endl;
    newfile.close();

}
