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

		void push_back(U value) {
			//1 Створюємо вузол
			Node<U>* el = new Node<U>(value);

			//Якщо це перший вузол
			if (head == nullptr) {
				head = el;//Назначаємо голову та хвіст
				tail = el;
			}
			else {//Якщо НЕ перший вузол
				tail->next = el;
				tail = el;//Оновлюємо хвіст
			}
		}

		void showInfo()const {
			if (head == nullptr) cout << "list is empty\n";
			else {
				Node<U>* p = head;
				while (p != nullptr)
				{
					p->show();
				}
			}
		}

	};
}