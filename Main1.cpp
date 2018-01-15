#include "header1.h"


int main()
{
	int repeat = 0;
	linkedlist *one = new linkedlist();
	linkedlist three;
	do {
		int selection;
		double x, y, z;
		cout << "Please choose a function from the following by entering the corresponding number: " << endl;
		cout << "1.   PushFront" << endl;
		cout << "2.   PushBack" << endl;
		cout << "3.   PopFront" << endl;
		cout << "4.   PopBack" << endl;
		cout << "5.   Insert" << endl;
		cout << "6.   Delete Duplicates" << endl;
		cout << "7.   M To Last Element" << endl;
		cout << "8.   Size" << endl;
		cout << "9.   Overload insertion operator(<<)" << endl;
		cout << "10.  Reverse List" << endl;
		cout << "11.  Copy Constructor" << endl;
		cout << "12.  Destructor" << endl;
		cout << "13.  Overload Assignment Operator" << endl;
		cout << "14.  Delete List" << endl;
		cout << "Enter your selection: ";
		cin >> selection;
		switch (selection)
		{
		case 1:
			cout << "Please enter a value to be pushed to the front of the list: ";
			cin >> x;
			cout << "List before the function: " << *one << endl;
			one->pushFront(x);
			cout << "List after the function : " << *one << endl;
			cout << "Would you like to select a function again? Enter 1 for YES and 2 for NO:";
			cin >> repeat;
			break;
		case 2:
			cout << "Please enter a value to be pushed to the back of the list: ";
			cin >> x;
			cout << "List before the function: " << *one << endl;
			one->pushBack(x);
			cout << "List after the function : " << *one << endl;
			cout << "Would you like to select a function again? Enter 1 for YES and 2 for NO:";
			cin >> repeat;
			break;
		case 3:
			cout << "List before the function: " << *one << endl;
			one->popFront();
			cout << "List after the function : " << *one << endl;
			cout << "Would you like to select a function again? Enter 1 for YES and 2 for NO:";
			cin >> repeat;
			break;
		case 4:
			cout << "List before the function: " << *one << endl;
			one->popBack();
			cout << "List after the function : " << *one << endl;
			cout << "Would you like to select a function again? Enter 1 for YES and 2 for NO:";
			cin >> repeat;
			break;
		case 5:
			cout << "Please enter a value to be inserted to the list: ";
			cin >> x;//value
			cout << "Enter the index: ";
			cin >> y;//index
			cout << "List before the function: " << *one << endl;
			one->insert(y, x);//index, value.
			cout << "List after the function : " << *one << endl;
			cout << "Would you like to select a function again? Enter 1 for YES and 2 for NO:";
			cin >> repeat;
			break;
		case 6:
			cout << "Enter the value to be deleted from the list: ";
			cin >> x;
			cout << "List before the function: " << *one << endl;
			one->deleteDuplicates(x);
			cout << "List after the function : " << *one << endl;
			cout << "Would you like to select a function again? Enter 1 for YES and 2 for NO:";
			cin >> repeat;
			break;
		case 7:
			cout << "Please enter m: ";
			cin >> x;
			cout << "list" << *one << endl;
			cout<< "Value at m:  "<<one->mtoLastElement(x);
			cout << "Would you like to select a function again? Enter 1 for YES and 2 for NO:";
			cin >> repeat;
			break;
		case 8:
			cout << "The size of the list is: " << one->Size() << endl;
			break;
		case 9:
			cout << "This list is being printed out using the overload insertion operator:" << *one << endl;
			break;
		case 10:
			cout << "List before the function: " << *one << endl;
			one->reverseList();
			cout << "List after the function : " << *one << endl;
			cout << "Would you like to select a function again? Enter 1 for YES and 2 for NO:";
			cin >> repeat;
			break;
		case 11:
		{
			linkedlist two = *one;
			cout << "Linked list two was created using copy constructor" << endl;
			cout << "Two: " << two << endl;
			cout << "One: " << *one << endl;
			cout << "Would you like to select a function again? Enter 1 for YES and 2 for NO:";
			cin >> repeat;
			break;
		}
		case 12:
			delete one;
			cout << "List one deleted" << endl;
			repeat = 2;  //cannot access the list after it is deleted
			break;
		case 13:
			three = *one;
			cout << "Linked list one is copied to list three using the overload assignment operator" << endl;
			cout << "One: " << three << endl;
			cout << "Three: " << *one << endl;
			cout << "Would you like to select a function again? Enter 1 for YES and 2 for NO:";
			cin >> repeat;
			break;
		case 14:
			three.deleteList();
			cout << "Deleted list three" << endl;
			repeat = 2;//cannont access the list after it is deleted
			break;
		default:
			cout << "The selection is invalid" << endl;
		}

	} while (repeat == 1);



	system("PAUSE");
	return 0;
}