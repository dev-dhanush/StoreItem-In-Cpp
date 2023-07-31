#ifndef STOREITEM_H
#define STOREITEM_H
#include <string.h>
namespace StoreItems
{
typedef struct Items{
	int itemCode;
	char transType;
	float qty;
}STOREITEM;

class Stock
{
	private:
	STOREITEM stock;
	
	public:
	void ReciptEntry();
	void IssueEntry();
	void StockList();
	void TransHis();
	void ViewStoreItem();
	
};

class SubFunc
{
	public:
	int getName(int code,char* p);
	float getTotal(int code);
	
};

}

#endif 

