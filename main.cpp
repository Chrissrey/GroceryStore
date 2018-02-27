//Author:Christopher rey Almaraz
#include<iostream>
#include<string>
using namespace std;

const int LIST_SIZE=5;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  int index;
  string buffer;
  
  index=0;
  do
{
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;


 if(input=='A' || input=='a')
 {
	cout<<"What is the item?\n";
	cin>>buffer;

	if(index<5)
	{
	list[index]=buffer;
	index++;}
	else
	{
       		cout<< "You'll need a bigger list!\n";
	}

 }
}while( input != 'q' && input != 'Q');

	cout<< "==ITEMS TO BUY== \n";

for(int items =0;items<5;items++)
{ 	string Grocery;
	Grocery=list[items];
	cout<<items+1<< " " << Grocery<< "\n";
}

  return 0;
}
