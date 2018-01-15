
#include <iostream>

using namespace std;

#pragma once

struct node {
	node*next;
	double data;
};


class linkedlist {
private:
	node*head;
	int size;
public:
	linkedlist();
	linkedlist(linkedlist &obj);
	~linkedlist();
	linkedlist& operator=(const linkedlist& rhs);
	void deleteList();
	int Size();
	node* returnHead()const;
	void pushFront(double value);
	void pushBack(double value);
	void popFront();
	void popBack();
	void insert(int index, double value);
	void deleteDuplicates(double value);
	int mtoLastElement(double m);
	friend ostream& operator<<(ostream& out, const linkedlist& list);
	void reverseList();
	
	
};
