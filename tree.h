#ifndef LAB_POINTER_H
#define LAB_POINTER_H
#include <iostream>
using namespace std;
class Uzel
{
public:
	int info;
	Uzel *right, *left, *parrent;

	Uzel()
	{
		right = left = parrent = nullptr;
	}

};


class BinaryTree
{
public:
	Uzel * current;

	BinaryTree(int info)//�����������
	{
		current = new Uzel();
		current->info = info;
	}

	void createLeftSon(int info)//������� ������ �������
	{
		Uzel *p = new Uzel();
		p->info = info;
		p->parrent = current;
		current->left = p;
	}

	void createRightSon(int info)//������� ������� �������
	{
		Uzel *p = new Uzel();
		p->info = info;
		p->parrent = current;
		current->right = p;
	}

	void goLeft()//������� �������� �� ������ �������
	{
		if (current->left == nullptr) {
			return;
		}
		current = current->left;
	}

	void goRight()//������� �������� �� ������� �������
	{
		if (current->right == nullptr) {
			return;
		}
		current = current->right;
	}

	void goUp()//������� �������� �����(� ��������)
	{
		if (current->parrent == nullptr) {
			return;
		}
		current = current->parrent;
	}

	void print(Uzel *r, int k = 0)//����� ������
	{
		if (r != NULL)
		{
			print(r->right, k + 3);

			for (int i = 0; i < k; i++)
			{
				cout << " ";
			}

			cout << r->info << endl;
			print(r->left, k + 3);
		}
	}

	void goToRoot() {//������� � �����
		while (current->parrent != nullptr)
		{
			goUp();
		}
	}

	bool Equals(BinaryTree * another) {//��������� � ������ �������
		goToRoot();
		another->goToRoot();
		return CompareUzels(current, another->current);
	}

	bool CompareUzels(Uzel * u1, Uzel * u2) {
		bool u1nl = (u1->left == nullptr);
		bool u1nr = (u1->right == nullptr);
		bool u2nl = (u2->left == nullptr);
		bool u2nr = (u2->right == nullptr);

		if ((u1nl != u2nl) || (u1nr != u2nr)) {
			return false;
		}

		bool eq = (u1->info == u2->info);
		bool eqleft = true;
		bool eqright = true;

		if (!u1nl) {
			eqleft = CompareUzels(u1->left, u2->left);
		}
		if (!u1nr) {
			eqright = CompareUzels(u1->right, u2->right);
		}

		return eqleft && eqright && eq;
	}

};
#endif
