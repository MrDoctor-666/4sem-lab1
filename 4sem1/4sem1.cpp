#include <iostream>
#include "RBtree.h"

int main()
{
	RedBlackTree<int, char> t;
	for (int i = 1; i < 7; i++) {
		t.insert(i, (char)i+56);
	}
	t.remove(2);
	/*t.insert(5, 'c');
	t.insert(4, 'c');
	t.insert(3, 'c');
	t.insert(7, 'c');
	t.insert(9, 'c');
	t.insert(6, 'c');*/
	t.print();
	std::cout << t.find(3);
}