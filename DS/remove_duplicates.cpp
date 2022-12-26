// Sorted LinkedList
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
void removeDuplicates(Node *head)
{
    Node *current = head;
    Node *next_next;
    if (current == NULL)
        return;

    while (current->next != NULL)
    {
        if (current->data == current->next->data)
        {
            next_next = current->next->next;
            free(current->next);
            current->next = next_next;
        }
        else
        {
            current = current->next;
        }
    }
}
void push(Node **head_ref, int new_data)
{

    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << " " << node->data;
        node = node->next;
    }
}
int main()
{
    Node *head = NULL;

    push(&head, 20);
    push(&head, 13);
    push(&head, 13);
    push(&head, 11);
    push(&head, 11);
    push(&head, 11);

    cout << "Linked list before duplicate removal " << endl;
    printList(head);

    removeDuplicates(head);

    cout << "\nLinked list after duplicate removal " << endl;
    printList(head);

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int data;
//     struct Node *next;
// };
// struct Node *newNode(int data)
// {
//     Node *temp = new Node;
//     temp->data = data;
//     temp->next = NULL;
//     return temp;
// }
// void removeDuplicates(struct Node *start)
// {
//     struct Node *ptr1, *ptr2, *dup;
//     ptr1 = start;
//     while (ptr1 != NULL && ptr1->next != NULL)
//     {
//         ptr2 = ptr1;
//         while (ptr2->next != NULL)
//         {
//             if (ptr1->data == ptr2->next->data)
//             {
//                 dup = ptr2->next;
//                 ptr2->next = ptr2->next->next;
//                 delete (dup);
//             }
//             else
//                 ptr2 = ptr2->next;
//         }
//         ptr1 = ptr1->next;
//     }
// }

// void printList(struct Node *node)
// {
//     while (node != NULL)
//     {
//         printf("%d ", node->data);
//         node = node->next;
//     }
// }

// int main()
// {
//     struct Node *start = newNode(10);
//     start->next = newNode(12);
//     start->next->next = newNode(11);
//     start->next->next->next = newNode(11);
//     start->next->next->next->next = newNode(12);
//     start->next->next->next->next->next = newNode(11);
//     start->next->next->next->next->next->next = newNode(10);

//     printf("Linked list before removing duplicates ");
//     printList(start);

//     removeDuplicates(start);

//     printf("\nLinked list after removing duplicates ");
//     printList(start);
//     return 0;
// }
