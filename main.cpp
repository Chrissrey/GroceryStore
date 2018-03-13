//Author:Christopher rey Almaraz
#include<iostream>
#include<string>
#include<vector>
using namespace std;

const int LIST_SIZE=5;

int main()
{
  vector<string> groceryList; //created a vector of strings called groceryList  ///string list[5]; //array of 5 strings called list
  int numItems = 0;
  char input;
  int index;
  string buffer;  //
  
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

				//if(index<5)
	
	groceryList.push_back(buffer); // if index is <5 then cin the persons item into the list
					//index++;
/*		else
	{
       		cout<< "You'll need a bigger list!\n";
	}
*/
 }
}while( input != 'q' && input != 'Q');

	if(groceryList.size()>0)
	cout<< "==ITEMS TO BUY==\n";
	else
	{ 
		cout<<"No items to buy.\n";
		return 0;
	}
		

for(int items =0;items<groceryList.size();items++)
{ 	string Grocery;
	Grocery=groceryList[items]; //the items in thr groceryList are in the Grocery
	cout<<items+1<< " " << Grocery<< "\n";
}

  return 0;
}
