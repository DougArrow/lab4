// ConsoleApplication34.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "tree.h"
using namespace std;
#include <iostream>
#include <string>
#include <string.h>
#include <conio.h>
int main()
{
BinaryTree *root = new BinaryTree(2);

	Uzel *start = root->current;

	root->createLeftSon(7);
	root->goLeft();
	root->createLeftSon(2);
	root->createRightSon(6);
	root->goRight();
	root->createLeftSon(5);
	root->createRightSon(11);
	root->goUp();
	root->goUp();

	root->createRightSon(5);
	root->goRight();
	root->createRightSon(9);
	root->goRight();
	root->createLeftSon(4);
	root->goUp();
	root->goUp();

	root->goLeft();

	root->print(start);

	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";


	
	BinaryTree *root2 = new BinaryTree(2);

	Uzel *start2 = root2->current;

	root2->createLeftSon(7);
	root2->goLeft();
	root2->createLeftSon(2);
	root2->createRightSon(6);
	root2->goRight();
	root2->createLeftSon(5);
	root2->createRightSon(11);
	root2->goUp();
	root2->goUp();

	

	root2->goLeft();

	root2->print(start2);


	if (root->Equals(root2)) {
		cout << "trees are =="<<endl;

	}
	else
	{
		cout << "Trees are !="<<endl;
	}

	

	system("pause");

}
  
	
	
	