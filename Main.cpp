#include "Inventory.h"
#include "Item.h"
using namespace std;

int main()
{
	Inventory<Item> inv;

	cout << "아이템추가\n";
	inv.AddItem({ "체력 포션", 50 });
	inv.AddItem({ "마나 포션", 50 });
	inv.AddItem({ "검", 100 });
	inv.AddItem({ "방패", 70 });
	inv.PrintAllItmes();

}