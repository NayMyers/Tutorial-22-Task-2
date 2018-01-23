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
	Node<int>* pTop = new Node<int>; // start of data structure allways points to top node 
	pTop->value = 0; // assign value to inital node 

	Node<int>* pNode = pTop; //will use pNode to build a data structure

	for (int value = 1; value <= 5; value++)
	{
		pNode->pNext = new Node<int>; //add node 
		pNode = pNode->pNext; //move to new node (pTop must remain pointing at start)
		pNode->value = value; //set node value equal to count of for loop
	}

	//display and clear data structure 

	int nodeValCount = 0;

	while (pTop != nullptr)
	{
		cout << pTop->value << endl;
		nodeValCount += pTop->value;
		pNode = pTop;
		pTop = pTop->pNext;
		delete pNode;
	}

	cout << "Total of nodes: " << nodeValCount << endl;
	return 0;
}
