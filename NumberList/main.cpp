#include <iostream>
#include "NumberList.h"
#include <fstream>
using namespace std;

int main()
{
    //NumberList list;
    //task 1
    //list.insertNode(10);
    //list.appendNode(40);
    //list.insertNode(30);
    //list.insertNode(25);
    //list.deleteNode(30);
    //list.displayList();

    //task 3
    //fstream file;
    //file.open("Numbers.txt");
    //int temp;
    //if (file)
    //{
    //    while (file >> temp)
    //    {
    //        list.insertNode(temp);
    //    }
    //    file.close();
    //}
    //else
    //{
    //    cout << "Error in opening file." << endl;
    //}
    //list.displayList();

    //task 4
    NumberList listA, listB;
    listA.appendNode(10);
    listA.appendNode(20);
    listB.appendNode(15);
    listB.appendNode(40);
    cout << "list A before assign: " << endl;
    listA.displayList();
    cout << "list B before assign: " << endl;
    listB.displayList();
    listA = listB;	// assign B to A
    listB.appendNode(50);
    cout << "list A after assign: " << endl;
    listA.displayList();
    cout << "list B after assign: " << endl;
    listB.displayList();


	return 0;
}