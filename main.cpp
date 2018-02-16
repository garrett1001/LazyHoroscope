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

  //get user input
cout<<"Enter your first name"<<endl;
cin>>first;
cout<<"Enter your last name"<<endl;
cin>>last;

nickname.push_back(first[0]);
nickname.push_back(last[0]);

  //tell fortune
lucky=first.length();

cout<<"Welcome, "<<nickname<<", here is your fortune. Your lucky number is "<<lucky<<endl;




  return 0;
}
