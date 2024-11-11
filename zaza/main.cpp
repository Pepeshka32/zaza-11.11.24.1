#include "list.h" 
#include<iostream> 

int main()
{
	list list;
	list.push_back(10);
	list.push_back(1);
	list.push_back(-5);

	list.push_front(3);


	list.show();
	list.clear();
	list.show();

	return 0;
}


