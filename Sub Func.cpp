#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <iostream>
#include "StoreItem main.h"

using namespace std;
using namespace StoreItems;

int SubFunc::getName(int code,char* p)
{
	int itemCode;
	char itemName[15];
	ifstream file;
	file.open(".//Items//Itemlist.txt",ios::in);
	while(!file.eof())
	{
		file>>itemCode>>itemName;
		int num=0;
		stringstream ss;
		ss<<itemCode;
	    ss>>num;
		if(num==code)
		{
			strcpy(p,itemName);
			return 1;
		}
	}
	file.close();
	return 0;
}

float SubFunc::getTotal(int code)
{
	STOREITEM item;
	float recipt=0,issue=0,total=0;
	ifstream file;
	file.open("stock.bin",ios::in);
	while(file.read((char*)&item,sizeof(item)))
	{
		if(code==item.itemCode)
		{
			if(item.transType=='R')
			{
				recipt+=item.qty;	 
			}
			else if(item.transType=='I')
			{
				issue+=item.qty;
			}
		}
	}
	
	file.close();
	total=recipt-issue;
	return total;
}

