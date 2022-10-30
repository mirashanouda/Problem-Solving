/*
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. 
Return the linked list sorted as well.

Input: head = [1,1,2,3,3]
Output: [1,2,3]
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

ListNode* deleteDuplicates(ListNode* head) {
    if(head == NULL || head->next == NULL)
        return head;
    
    ListNode *temp; 
    temp = head; 
    //[1,1,2,3,3]
    //[1,2,3]
    while (temp->next != NULL){
        if(temp->val == temp->next->val){
            temp->next = temp->next->next; 
            continue; 
        }
        else
            temp = temp->next;
    }
    return head;
}
