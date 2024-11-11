#pragma once 
#include<iostream> 
using namespace std;

class list
{
	class Node
	{
	public:
		int value;
		Node* prev;
		Node* next;
		Node()
			:value(0), prev(nullptr), next(nullptr)
		{}

		Node(int value)
			:value(value), prev(nullptr), next(nullptr)

		{}
		Node(Node* prev, int value)
			:value(value), prev(prev), next(nullptr)

		{}
		Node(int value, Node* next)
			:value(value), prev(prev), next(next)

		{}

	};
private:
	Node* head;
	Node* tail;
	size_t size;
public:
	list();
	~list();
	list(const list& other);
	void push_back(int value);
	void push_front(int value);
	void clear();
	void show() const;

};