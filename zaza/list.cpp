#include "list.h" 
#include<iostream> 
using namespace std;

list::list()
	:head(nullptr), tail(nullptr), size(0)
{}


list::~list()
{
	clear();
}

list::list(const list& other)
{
	if (other.size == 0)
	{
	return;
	}
	Node* current = other.head;
	Node* x;
	Node* y= new Node(current->value);
	head = x;
	tail = y;
	current = current->next;
	while (current)
	{
		x = y;
		y = new  Node( current->value,x);
		x->next = y;
		tail = y;
		current = current->next;
		
	}
	size++;
}

void list::push_back(int value)
{
	Node* new_node = new Node(value);
	if (head && tail)
	{
		Node* new_node = new Node(head, value);
		tail->next = new_node;
		tail = new_node;
	}
	else
	{
		Node* new_node = new Node(value);
		head = new_node;
		tail = new_node;
	}
	size++;
}

void list::push_front(int value)
{
	Node* new_node = new Node(value);
	if (head)
	{
		Node* new_node = new Node(value, head);
		head->prev= new_node;
		head = new_node;
	}
	else
	{
		Node* new_node = new Node(value);
		head = new_node;

	}
	size++;
}

void list::clear()
{
	if (head && tail)
	{
		return;
		
	}
Node* current = tail;
		Node* temp = current->prev;
		while (current)
		{
			delete current;
			current = temp;
			temp = temp ? temp->prev : nullptr;

		}
		tail = nullptr;
		head = nullptr;
		size = 0;
}


void list::show() const
{
	Node* current = head;
	while (current)
	{
		cout << current->value << ' ' << endl;
		current = current->next;
	}

}