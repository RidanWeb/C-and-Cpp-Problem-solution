#include <bits/stdc++.h>
using namespace std;


class Node{

public:
    int val;
    Node* next;

    Node(int val){

        this->val = val;
        this->next = NULL;
    }
    
};



void optimized_insert_at_tail(Node* &head, Node* &tail,  int val){

    Node* newNode = new Node(val);

    if(head == NULL){

        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;


}


void reverse_linkedlist(Node* &head, Node* &tail, Node* temp){

    if(temp->next == NULL){

        head = temp;
        return;
    }

    reverse_linkedlist(head, tail, temp->next);
    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;
}



void print_linkedlist(Node* head){

    Node* temp = head;

    while(temp != NULL){

        cout << temp->val << " ";
         temp = temp->next;
    }

    cout << endl;
}





int main()
{
    

    Node* head = NULL;
    Node* tail = NULL;

    int val;

    while(true){

        cin >> val;

        if(val == -1){

            break;
        }

        optimized_insert_at_tail(head, tail, val);
    }


    reverse_linkedlist(head, tail, head);

    print_linkedlist(head);

    cout << endl << head->val << "  " << tail->val;






    return 0;
}