     #include "header1.h"

linkedlist::linkedlist()
{
	head = NULL;
	size = 0;
}



linkedlist::linkedlist(linkedlist &rhs)            //copy constructor
{
	cout << "from copy constructor" << endl;
	node* rhshead = rhs.head;
	node* temp = new node;
	head = temp;
	head->data = rhshead->data;
	head->next = NULL;
	rhshead = rhshead->next;
	size = 1;

	while (rhshead != NULL) {
		node* second = new node;
		second->data = rhshead->data;
		second->next = NULL;
		temp->next = second;
		temp = temp->next;
		rhshead = rhshead->next;
		size++;
	}
}

linkedlist::~linkedlist()                    //destructor
{
	cout << "in destructor" << endl;
	if (head == NULL)
		return;
	node* temp;
	while (head != NULL) {
		temp = head;
		head = head->next;
		delete temp;
		temp = NULL;
	}
	head = NULL;
	size = 0;
}

linkedlist& linkedlist::operator=(const linkedlist& rhs) //assignment operator 
{
	cout << "from assignment operator" << endl;
	if (rhs.head == NULL)
		deleteList();
	else {
		deleteList();
		node* rhshead = rhs.head;
		node* temp = new node;
		head = temp;
		head->data = rhshead->data;
		head->next = NULL;
		rhshead = rhshead->next;
		size = 1;

		while (rhshead != NULL) {
			node* second = new node;
			second->data = rhshead->data;
			second->next = NULL;
			temp->next = second;
			temp = temp->next;
			rhshead = rhshead->next;
			size++;
		}


	}

	return *this;

}

void linkedlist::deleteList() {
	node* temp;
	while (head != NULL) {
		temp = head;
		head = head->next;
		delete temp;
		temp = NULL;
	}
	head = NULL;
	size = 0;
}



int linkedlist::Size()
{
	return size;
}

node* linkedlist::returnHead()const
{
	return head;
}

void linkedlist::pushFront(double value)
{
	node*temp = new node;
	temp->data = value;
	temp->next = NULL;
	if (head == NULL)
		head = temp;
	else
	{
		temp->next = head;
		head = temp;
	}
	size++;
}

void linkedlist::pushBack(double value)
{
	node*temp = new node;
	temp->data = value;
	temp->next = NULL;
	if (head == NULL)
	{
		head = temp;
	}
	{
		node*iterator = head;
		while (iterator->next != NULL)
		{
			iterator = iterator->next;
		}
		iterator->next = temp;
	}
	size++;
}

void linkedlist::popFront()
{
	if (head == NULL)
		return;
	else
	{
		node*temp = head;
		head = head->next;
		delete temp;
		temp = NULL;
		size--;
	}
}

void linkedlist::popBack()
{
	if (head == NULL)
		return;
	else
	{
		node*iterator = head;
		while (iterator->next->next != NULL)
		{
			iterator = iterator->next;
		}
		node*temp = iterator->next;
		iterator->next = NULL;
		delete temp;
		temp = NULL;
		size--;
	}
}

void linkedlist::insert(int index, double value) 
{
	node*temp = new node;
	temp->next = NULL;
	temp->data = value;
	if (head == NULL)
	{
		head = temp;
		size++;
	}
	else
	{
		node*iterator = head;
		int count = 0;
		if (index == 0)
		{
			pushFront(value);
		}
		else
		{
			while (iterator->next != NULL)
			{
				if (count == index - 1)
					break;
				iterator = iterator->next;
				count++;
			}
			if (count == index - 1)
			{
				node*savenext = iterator->next;
				iterator->next = temp;
				temp->next = savenext;
				savenext = NULL;
				size++;
			}
			else
				cout << "Error: index out of bounds" << endl;
		}
	}
}

void linkedlist::deleteDuplicates(double value)
{
	if (head == NULL)  //if the list is empty
	{
		return;
	}
	else if (head->data == value)//if the first data in the list is the given value
	{
		node*newPtr = head;
		head = head->next;
		delete newPtr;
		newPtr = NULL;
		size--;
	}
	
		node*iterator = head;			
		while (iterator->next != NULL)		//move through the list
		{
			while (iterator->next->data != value && iterator->next->next != NULL) //find the value
				{
					iterator = iterator->next;
				}
			if (iterator->next->data == value)//remove the value if found
			{
				node*temp = iterator->next;
				iterator->next = temp->next;
				delete temp;
				temp = NULL;
				size--;
			}
			else    //end while loop if the last data is not equal to value
				break;
		}
}

int linkedlist::mtoLastElement(double m)
{
	if (m > size - 1)
	{
		cout << "Error: M is out of bounds" << endl;
		return -1;
	}
	else
	{
		int index = size - 1;
		node*iterator = head;
		while (iterator->next != NULL && index != m)
		{
			iterator = iterator->next;
			index--;
		}
		return iterator->data;
	}
}

ostream& operator<<(ostream& out, const linkedlist& list)
{
	node*iterator = list.returnHead();
	while (iterator != NULL)
	{
		out << iterator->data << " ";
		iterator = iterator->next;
	}
	return out;
}

void linkedlist::reverseList()
{
	node* prev = NULL;
	node* current = head;
	node* next;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
	
}

