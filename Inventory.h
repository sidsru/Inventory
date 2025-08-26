#pragma once
#include <iostream>
#include <vector>
#include "Item.h"
using namespace std;

template<typename T>
class Inventory
{
protected:
	T* pItems;
	int Capacity;
	int Size;
public:
	Inventory(int capacity = 10) : Capacity(capacity > 0 ? capacity : 1), Size(0)
	{
		pItems = new T[capacity];
	}

	void AddItem(const T& Item)
	{
		//- ���ο� �������� �κ��丮�� �߰��մϴ�.
		//-`size_`�� `capacity_`���� ���� ��쿡�� �������� �߰��ϰ�, `size_`�� 1 ������ŵ�ϴ�.
		//	- �κ��丮�� �� á�ٸ� "�κ��丮�� �� á���ϴ�!" �޽����� ����ϰ� �ƹ� ���۵� ���� �ʽ��ϴ�.
		if (Size < Capacity)
		{
			pItems[Size] = Item;
			++Size;
		}
		else cout << "�κ��丮�� �� á���ϴ�!" << endl;
	}

	void RemoveLastItem()
	{
		//-�κ��丮�� ���� �������� �߰��� �������� �����մϴ�.
		//	- ������ �޸𸮸� ����� ���� �ƴ϶�, �������� ������ ��Ÿ���� `size_`�� 1 ���ҽ��� ������ �����ۿ� ������ �� ������ ����ϴ�.
		//	- �κ��丮�� ����ִٸ� "�κ��丮�� ����ֽ��ϴ�." �޽����� ����մϴ�.
		if (Size != 0)
		{
			--Size;
		}
		else 
		{
			cout << "�κ��丮�� ����ֽ��ϴ�." << endl;
		}
	}
	int getSize()const
	{
		return Size;
	}
	int getCapacity()const
	{
		return Capacity;
	}
	void PrintAllItmes()const
	{
		//-�κ��丮�� �ִ� ��� �������� ������ ȭ�鿡 ����մϴ�.
		//	- `for` �ݺ����� �̿��� `0`�� �ε������� `size_ - 1`�� �ε������� ��ȸ�ϸ�, �� ������ ��ü�� `PrintInfo()` ��� �Լ��� ȣ���մϴ�.
		for (int i = 0; i < Size; i++)
		{
			pItems[i].PinrtInfo();
		}
	}
	~Inventory()
	{
		delete[] pItems;
		//T* = nullptr;
	}
};
