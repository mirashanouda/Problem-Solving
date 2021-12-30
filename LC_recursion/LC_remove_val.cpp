//remove all the nodes of the linked list that has Node.val == val, and return the new head.


#include <bits/stdc++.h>
using namespace std; 

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeElements(ListNode* head, int val) {
    
    if (head == NULL)
        return NULL;
            
    head->next = removeElements(head->next, val); 
    if(head->val == val)
        return head->next;

    return head;
}
