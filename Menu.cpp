#include <conio.h>
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

void Menu::start()
{
	while(1)
	{
		system("cls");
		int cho=menu();
		
		switch(cho)
		{
			case 1:
			break;
			
			case 2:
			break;
			
			case 3:
			break;
			
			case 4:
			break;
			
			case 5:
			break;
			
			case 0:
			return;
			break;
			
			default:
			cout<<"\nInvalid Input. Please Enter the Valid Input....";
			cout<<"\nPress any key to continue...";
			getch();
			break;
			
		}
	}
}

