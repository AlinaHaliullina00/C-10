
#include <iostream>
#include <stdlib.h>

using namespace std;
struct Elem {
    int value;
    struct Elem* next;
};

Elem* new_node(int, Elem*&);
void print_nodes(const Elem*);
void r_shift(Elem*&);
void del_nodes(Elem*&);
Elem* head = NULL;

int main(int argc, char* argv[])
{
    int n, k, i, v;
    cout << "Kol. elementov v spiske: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Znachenie chisl. polya dlya elementa " << i + 1 << ": ";
        cin >> v;
        new_node(v, head);
    }
    cout << "Spisok: ";
    print_nodes(head);
    cout << "Kol. sdvigov: ";
    cin >> k;
    for (i = 0; i < k; i++)
        r_shift(head);
    cout << "Spisok posle " << k << " sdvigov: ";
    print_nodes(head);
    del_nodes(head);
    system("PAUSE");
    return 0;
}

