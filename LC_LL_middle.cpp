/*
return the middle of the linkedlist 

using runner algorithm:
When pl hits the end of the linked list, p2 will be at the midpoint
*/

#include <bits/stdc++.h>
using namespace std; 

struct ListNode {
      int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* middleNode(ListNode* head) {
    if(head == NULL || head->next == NULL)
        return head;

    ListNode * p1 = head, 
            *p2 = head;

    //[1,2,3,4,5]
    //[1,2,3,4,5,6]
    while(true){
        if(p2 == NULL)
            break;
        if (p2->next == NULL)
            break;
        p1 = p1->next; 
        p2 = p2->next->next;  
    }
    return p1; 
}
