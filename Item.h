#pragma once
#include <iostream>
using namespace std;

struct Item
{
	string Name;
	int Price;
	void PinrtInfo()const
	{
		cout << "[�̸�: " << Name << ", ����: " << Price << "G]" << endl;
	}
}; 
