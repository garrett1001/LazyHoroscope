//Authors:Garrett Welton
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
string first;
string last;
string nickname;
int lucky;
int lastLetter;

  //get user input
cout<<"What is your first name?"<<endl;
cin>>first;
cout<<"What is your last name?"<<endl;
cin>>last;

lucky=first.length();
lastLetter=last.length()-1;

nickname.push_back(first[0]);
nickname.push_back('.');
nickname.push_back(last[0]);
nickname.push_back('.');

first[0]=toupper(first[0]);
last[0]=toupper(last[0]);
last[lastLetter]=toupper(last[lastLetter]);

  //tell fortune
cout<<"Welcome, "<<nickname<<", here is your fortune..."<<endl;

cout<<"your lucky number is "<<lucky<<endl;

if(first[0]=='A' || first[0]=='E' || first[0]=='I' || first[0]=='O' || first[0]=='U')
{
cout<<"you are destined to be famous!"<<endl;
}
else
{
cout<<"you should keep a low profile."<<endl;
}

if(last[lastLetter]=='A' || last[lastLetter]=='E' || last[lastLetter]=='I' || last[lastLetter]=='O' || last[lastLetter]=='U')
{
cout<<"you have already met your true love."<<endl;
}

cout<<"have a good day!"<<endl;



  return 0;
}
