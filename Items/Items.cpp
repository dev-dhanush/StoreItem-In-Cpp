#include <iostream>
#include <fstream>
#include <conio.h>
#include "ItemsHeader.h"

using namespace std;
using namespace ItemsInfo;

void Items::addItem()
{
	cout<<"\n\nYou Choose Add Item ...";
	cout<<"\nEnter the Item Code : ";
	cin>>itemCode;
	cout<<"\nEnter the Item Name : ";
	cin>>itemName;
	
	ofstream file;
	file.open("Itemlist.txt",ios::app);
	file<<itemCode<<" "<<itemName<<"\n";
	file.close();
}

void Items::listItem()
{
	string read;
	ifstream file;
	file.open("Itemlist.txt",ios::in);
	while(getline(file,read))
	{
		cout<<read<<endl;
	}
	
	file.close();
}

