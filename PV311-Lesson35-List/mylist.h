#pragma once
#include "Node.h"

namespace MyList {

	template<typename U>
	class List {
		Node<U>* head;
		Node<U>* tail;
	public:
		List() {
			head = tail = nullptr;
		}
		~List() {

		}

	};
}