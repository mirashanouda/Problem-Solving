/*
Detect a cycle in a list. 

Runner Algorithm
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

 
 bool hasCycle(ListNode *head) {
        if (head == NULL || head->next == NULL)
            return false;
        
        ListNode *slow, *fast;
        slow = head;
        fast = head->next->next; 
            
        while (slow != NULL && fast != NULL){
            if (slow == fast)
                return true;
            if (fast->next == NULL)
                break;
            slow = slow->next; 
            fast = fast->next->next;
        }
        return false;
    }