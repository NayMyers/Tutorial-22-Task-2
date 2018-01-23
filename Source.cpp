#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

template<typename T>
class Node
{
public:
	T value;
	Node* pNext = nullptr;
	Node* pPrevious = nullptr;
};

int main()
{
	Node<int>* pNode = new Node<int>;
	Node <int>* temp;

	pNode->pNext = new Node<int>; // two node chain
	

	while (pNode != nullptr)
	{
		temp = pNode; //make sure we don't lose refrence 
		pNode = pNode->pNext;
		delete temp;
	}

	return 0;
}
