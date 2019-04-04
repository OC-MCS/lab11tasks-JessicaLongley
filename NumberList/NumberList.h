// Specification file for the NumberList class
#pragma once

class NumberList
{
private:
	// Declare a structure for the list
	struct ListNode
	{
		int value;           // The value in this node
		struct ListNode *next;  // To point to the next node
	};

	ListNode *head;            // List head pointer
    ListNode *tailPtr;         // List tail pointer

public:
	// Constructor
	NumberList()
	{
		head = nullptr;
	}

    //copy constructor
    NumberList(const NumberList &n)
    {
        ListNode *nodePtr; //to move through the list
        nodePtr = n.head; 
        head = nullptr; //set head to null pointer so that appendNode has a number to work with ****this was the problem with task 4

        //append list n to list this list one by one
        while (nodePtr) //while nodePtr points to a value
        {
            appendNode(nodePtr->value); //append the value from list n to the new list
            nodePtr = nodePtr->next; //move on to the next value in list n
        }
    }

	// Destructor
	~NumberList();

	// Linked list operations
	void appendNode(int);
	void insertNode(int);
	void deleteNode(int);
	void displayList() const;
    NumberList operator= (const NumberList &right);
};

