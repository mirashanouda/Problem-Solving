/*
You are given a singly-linked list that contains N integers. A subpart of the list is a contiguous set of even elements, bordered 
either by
- end of the list 
- or an odd element. 

For example, if the list is [1, 2, 8, 9, 12, 16], the subparts of the list are [2, 8] and [12, 16].
Then, for each subpart, the order of the elements is reversed. In the example, this would result in the new list, [1, 8, 2, 9, 16, 12].
The goal of this question is: given a resulting list, determine the original order of the elements.
Implementation detail:
*/

#include <bits/stdc++.h>
using namespace std; 

struct Node {
  int data;
  Node *next;
  Node(int x) : data(x), next(NULL) {}
};

// Add any helper functions you may need here

void revSub(Node* previous, Node *start, Node *end){
    Node *pre = previous;
    Node *cur = start; 
    Node *nxt = NULL;

    while(cur != end){
        nxt = cur->next;
        cur->next = pre; 
        pre = cur; 
        cur = nxt;
    }

    //return pre; 
}

Node* reverse(Node *head) {
  /*
  2 pointers
  one for the begining of the even numbers 
  one for the end 
  -- I need to check if the are different 
  */
    if(head->next == NULL) //if only one node
        return head;

    Node *p1 = new Node(0);
    Node *p2 = new Node(0);

    p1 = head; 
    p2 = head;
    
    // [1, 2, 8, 9, 12, 16]
    while(p1->next != NULL && p2->next != NULL) 
    {
        if (p1->next->data % 2 != 0) //the current is odd 
        {
            p1 = p1->next;
            p2 = p2->next;
            continue;
        }
        //p1 will be at the one previous to the fisrt even number
        

        while(p2->next->data % 2 == 0 && p2 != NULL) { //the next one is even
            p2 = p2->next;
        }//p2 at the last even number

        p2 = p2->next; //p2 at the fisrt odd num after the even secquance 

        //p2 now at the last even number
        //Node *pre = p1;
        //Node *cur = new Node(-1000); 
        //cur = p1->next;
        //Node *nxt = NULL;

        //reversing
        //while (cur != p2->next && cur != NULL){
        //    nxt = cur->next;
        //    //cout << "nxt = " << nxt->data << endl;
        //    cur->next = pre; 
        //    //cout << "cur->next = " << cur->next->data << endl;
        //    pre = cur;
        //    //cout << "pre = " << pre->data << endl;
        //    cur = nxt;
        //    //cout << "cur = " << cur->data  << endl;
        //}
        
        revSub(p1, p1->next, p2->next);

        //while(p1 != NULL){
        //cout << p1->data << endl;
        //p1 = p1->next;
        //}
        //while (p1->next != NULL)
        //    p1=p1->next;

        //p1->next = p2;
        //p1 = p1->next;


        //if (nxt == NULL)
        //    cout << "nxt = NULL" << endl;
        //else 
        //    cout << "nxt = " << nxt->data << endl;
        //
        //if (cur == NULL)
        //    cout << "cur = NULL" << endl;
        //else 
        //    cout << "cur = " << cur->data  << endl;
        //
        //if (pre == NULL)
        //    cout << "pre = NULL" << endl;
        //else 
        //    cout << "pre = " << pre->data << endl;
        //positioning them at the same plac
    }
    return head;
}

int main(){
    //[1, 2, 8, 9, 12, 16]
    Node *l1, *l2, *l3, *l4, *l5, *l6;

    l1 = new Node(1);
    l2 = new Node(2);
    l3 = new Node(8);
    l4 = new Node(9);
    l5 = new Node(12);
    l6 = new Node(16);

    l1->next = l2;
    l2->next = l3;
    l3->next = l4;
    l4->next = l5;
    l5->next = l6;
    l6->next = NULL;

    l1 = reverse(l1);
    while(l1 != NULL){
        cout << l1->data << endl;
        l1= l1->next;
    }
    return 0;
}

