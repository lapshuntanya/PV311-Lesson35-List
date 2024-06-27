#include "mylist.h"

int main()
{
    //7 12 -6 123
    using namespace MyList;

   /* Node<int> first(7);     //item=7, next=&second

    Node<int> second(12);   //item=12, next=&third
    first.next = &second;

    Node<int> third(-6);    //item=-6, next = &fourth
    second.next = &third;

    Node<int> fourth(123); //item=123, next = nullptr
    third.next = &fourth;

    //Обробка списку
    Node<int>* p = &first;
    while (p != nullptr) {
        cout << p->item << " "; //7
        p = p->next;
    }

    */

    List<int> a;
    a.push_back(7);
    a.push_back(12);
    a.push_back(-6);
    a.push_back(123);

    a.showInfo();
}


