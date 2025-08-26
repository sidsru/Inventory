#pragma once
#include <iostream>
using namespace std;

struct Item
{
	string Name;
	int Price;
	void PinrtInfo()const
	{
		cout << "[이름: " << Name << ", 가격: " << Price << "G]" << endl;
	}
}; 
