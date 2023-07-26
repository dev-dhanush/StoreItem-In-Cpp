#include <iostream>
#include "ProcessHeader.h"
#include "ItemsHeader.h"

using namespace std;
using namespace Process;
using namespace ItemsInfo;

void Process1::start()
{
	int cho=menu.menu();
	Items item;
	switch(cho)
	{
		case 1:
		item.addItem();
		break;
		
		case 2:
		item.listItem();
		break;
		
		case 0:
		return;
		break;
	}
}

