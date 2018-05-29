#include "ListQueue.h"
#include "ListQueue.cpp"
#include<iostream>
using namespace std;
int main()
{
	List<int> L;
	L.push_back(5);
	L.push_back(12);
	L.push_back(112);



	L.print();
	cout << endl;

	L.removeFirst();// удаляем первый элемент
	L.print();

	system("pause");
	return 0;
}