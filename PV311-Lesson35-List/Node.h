#pragma once
#include <iostream>
using std::cout;
using std::endl;

namespace MyList {
	template<typename T>
	class Node
	{
	public:
		T item;
		Node* next;

		Node(T value) { item = value; next = nullptr; }
		void show()const {
			cout << "item: " << item << endl;
			cout << "\tnext: " << next << endl;
		}
	};
}