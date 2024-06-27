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
					p = p->next;
				}
			}
		}

	};

	template<typename U>
	class DList {
		DNode<U>* head;
		DNode<U>* tail;
	public:
		DList() {
			head = tail = nullptr;
		}
		~DList() {
			DNode<U>* p = head;
			while (p!=nullptr)
			{
				DNode<U>* tmp = p;
				p = p->next;
				cout << "delete: " << tmp->item << endl;
				delete tmp;
			}
		}

		void push_back(U value) {
			DNode<U>* el = new DNode<U>(value);

			if (head == nullptr) {
				head = tail = el;
			}
			else {
				tail->next = el;
				el->prev = tail;
				tail = el;
			}
		}

		void showInfo()const {
			if (head == nullptr) cout << "list is empty\n";
			else {
				DNode<U>* p = head;
				while (p != nullptr){
					cout << p->item << " ";
					p = p->next;
				}
			}cout << endl;
		}
		void showReverseInfo()const	{
			if (head == nullptr) cout << "list is empty\n";
			else {
				DNode<U>* p = tail;
				while (p != nullptr){
					cout << p->item << " ";
					p = p->prev;
				}
			}cout << endl;
		}

		DNode<U>* search(U value) {
			//Знайти вузол з заданим значенням та повернути його
			//Якщо такого вузла немає повернути nullptr
		}
	};

}