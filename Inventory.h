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
		//- 새로운 아이템을 인벤토리에 추가합니다.
		//-`size_`가 `capacity_`보다 작을 경우에만 아이템을 추가하고, `size_`를 1 증가시킵니다.
		//	- 인벤토리가 꽉 찼다면 "인벤토리가 꽉 찼습니다!" 메시지를 출력하고 아무 동작도 하지 않습니다.
		if (Size < Capacity)
		{
			pItems[Size] = Item;
			++Size;
		}
		else cout << "인벤토리가 꽉 찼습니다!" << endl;
	}

	void RemoveLastItem()
	{
		//-인벤토리의 가장 마지막에 추가된 아이템을 제거합니다.
		//	- 실제로 메모리를 지우는 것이 아니라, 아이템의 개수를 나타내는 `size_`를 1 감소시켜 마지막 아이템에 접근할 수 없도록 만듭니다.
		//	- 인벤토리가 비어있다면 "인벤토리가 비어있습니다." 메시지를 출력합니다.
		if (Size != 0)
		{
			--Size;
		}
		else 
		{
			cout << "인벤토리가 비어있습니다." << endl;
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
		//-인벤토리에 있는 모든 아이템의 정보를 화면에 출력합니다.
		//	- `for` 반복문을 이용해 `0`번 인덱스부터 `size_ - 1`번 인덱스까지 순회하며, 각 아이템 객체의 `PrintInfo()` 멤버 함수를 호출합니다.
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
