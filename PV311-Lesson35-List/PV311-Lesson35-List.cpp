#include "mylist.h"
#include <string>

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

    DList<std::string> a;
    a.push_back("Daniil");
    a.push_back("Mykola");
    a.push_back("Artur");
    a.push_back("Lyudmyla");

    a.showInfo();
    a.showReverseInfo();
    cout << "++++++++++++++++++++++++++++\n\n";
    auto p = a.search("Mykola");
    if (p != nullptr) p->show();
    else cout << "not found\n";

    p = a.search("Danylo");
    if (p != nullptr) p->show();
    else cout << "not found\n";

}


