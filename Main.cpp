#include "Inventory.h"
#include "Item.h"
using namespace std;

int main()
{
	Inventory<Item> inv;

	cout << "�������߰�\n";
	inv.AddItem({ "ü�� ����", 50 });
	inv.AddItem({ "���� ����", 50 });
	inv.AddItem({ "��", 100 });
	inv.AddItem({ "����", 70 });
	inv.PrintAllItmes();

}