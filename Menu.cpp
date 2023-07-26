#include <iostream>
#include "MenuHeader.h"

using namespace std;
using namespace MainMenu;

int Menu::menu(){
	int opt;
	
	cout<<"\n-----------------------";
	cout<<"\nStore Item Project     ";
	cout<<"\n-----------------------";
	cout<<"\n\n\tMenu:";
	cout<<"\n     -----------      ";
	cout<<"\n1.Reciept Entry";
	cout<<"\n2.Issue Entry";
	cout<<"\n3.Stock List";
	cout<<"\n4.Stock Transaction Report";
	cout<<"\n5.View Store Item";
	cout<<"\n0.Quit";
	
	cout<<"\n\nEnter your choice : ";
	cin>>opt;
	
	return opt;
}

