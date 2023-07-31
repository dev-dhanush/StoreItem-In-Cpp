#include<iomanip>
#include <fstream>
#include <conio.h>
#include <iostream>
#include "StoreItem main.h"

using namespace std;
using namespace StoreItems;

void Stock::ReciptEntry()
{
	char name[15];
	SubFunc sf;
	char cho;
	//indicate this is Issue transaction
	stock.transType='R';
	//Get the item code for issue item
	cout<<"\nEnter the Item Code :";
	cin>>stock.itemCode;
	
	//check the item name is correct or not
	sf.getName(stock.itemCode,name);
	cout<<"\nThe Item Name : "<<name<<endl;
	cout<<"\nName is it correct? : (Y/N)";
	cin>>cho;
	
	
	if(cho=='y'||cho=='Y'){
	
	//Get the quantity
	cout<<"\nEnter the Quantity of the Item :";
	cin>>stock.qty;
	
	//write the content to file
	ofstream file;
	file.open("Stock.bin",ios::app|ios::binary);
	file.write((char*)&stock, sizeof(stock));
	file.close();
	}
	else
	{
	cout<<"\nSorry, Name is not correct...";
	getch();
	return;
	}
	
	//just wait for screen
	cout<<"\n\npress any key to continue...";
	getch();

}

void Stock::IssueEntry()
{
	char name[15];
	SubFunc sf;
	char cho;
	//indicate this is Issue transaction
	stock.transType='I';
	//Get the item code for issue item
	cout<<"\nEnter the Item Code :";
	cin>>stock.itemCode;
	
	//check the item name is correct or not
	sf.getName(stock.itemCode,name);
	cout<<"\nThe Item Name : "<<name<<endl;
	cout<<"\nName is it correct? : (Y/N)";
	cin>>cho;
	
	
	if(cho=='y'||cho=='Y'){
	
	//Get the quantity
	cout<<"\nEnter the Quantity of the Item :";
	cin>>stock.qty;
	
	//write the content to file
	ofstream file;
	file.open("Stock.bin",ios::app|ios::binary);
	file.write((char*)&stock, sizeof(stock));
	file.close();
	}
	else
	{
	cout<<"\nSorry, Name is not correct...";
	getch();
	return;
	}
	
	//just wait for screen
	cout<<"\n\npress any key to continue...";
	getch();

}

void Stock::StockList()
{
	SubFunc sb;
	int code;
	string name;
	ifstream file;
	file.open(".//Items//Itemlist.txt",ios::in);
	while(!file.eof())
	{
		file>>code>>name;
		cout<<"\n"<<code<<" "<<name<<sb.getTotal(code);
	}
	
	file.close();
	
	//just wait the screen
	cout<<"\n\npress any key to continue...";	 
	getch();
}

void Stock::TransHis()	//reading the stock list
{
	SubFunc sb;		//object for get name func
	int code;
	char name[15];
	
	//get the item code from user
	cout<<"\nEnter Item code :";
	cin>>code;
	
	//get the item using item code
	sb.getName(code,name);
	
	//opened the file in binary mode
	ifstream file;
	file.open("Stock.bin",ios::in|ios::binary);
	
	//print the item name	
	cout<<"\n\n-----------------------------------\n";
	cout<<setw(20)<<name;
	cout<<"\n-----------------------------------";  
	cout<<"\nTransType"<<setw(14)<<"Recipt"<<setw(11)<<"Issue"<<endl;
	
	//print the trans history for recipt and issue in order
	while(file.read((char*)&stock, sizeof(stock)))
	{
	if(code==stock.itemCode){
		if(stock.transType=='R')
		cout<<"\n"<<stock.transType<<setw(22)<<stock.qty;	
		else if(stock.transType=='I')
		cout<<"\n"<<stock.transType<<setw(33)<<stock.qty;			
	}	 
	}
	
	file.close();
	
	//just wait the screen
	cout<<"\n\npress any key to continue...";	 
	getch();
}

void Stock::ViewStoreItem()
{

	cout<<"\nView Stroed Items";
	cout<<"\n---------------------\n";
	ifstream file;
	file.open(".//Items//Itemlist.txt",ios::in);
	string read;
	while(getline(file,read))
	{
	
	cout<<read<<endl;
	
	}
	file.close();
	
	cout<<"\nPress any key to continue..";
	getch();
}


