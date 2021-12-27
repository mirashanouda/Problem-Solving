/*
You are given a singly-linked list that contains N integers. A subpart of the list is a contiguous set of even elements, bordered either by
- either end of the list 
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

Node* reverse(Node *head) {
  /*
  2 pointers
  one for the begining of the even numbers 
  one for the end 
  -- I need to check if the are different 
  */

    if(head->next == NULL) //if only one node
        return head;

    Node *p1 = head,
        *p2 = head;
    
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
        p2 = p2->next; //p2 at the fisrt even number 

        while(p2->next->data % 2 == 0 && p2->next != NULL) { //the next one is even
            p2 = p2->next;
        }
        
        //p2 now at the last even number
        Node *pre = NULL;
        Node *cur = p1->next;
        Node *nxt = NULL;

        //reversing
        while (cur != p2->next && cur != NULL){
            nxt = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nxt;
        }
        
        //positioning them at the same place
        p1 = cur;
        p2 = cur;
    }
    return head;
}

int main(){

    Node n1(1);
    Node n2(2);
    Node n3(8);
    Node n4(9);
    Node n5(12);
    Node n6(16);
    
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n6;
    

    Node *head = &n1;
    Node *result = reverse(head); 
    cout << head->next->data << endl;

    return 0;
}

