/*
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
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

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    //base case 
    //if (l1 == NULL) return l2;
    //if (l2 == NULL) return l1;
//
    ////using dummy node: 
    //ListNode * dummy, * head; 
    //dummy = head; 
//
    //while (l1 != NULL && l2 != NULL){
    //    if(l1->val <= l2->val){
    //        dummy->next = l1;
    //        l1 = l1->next;
    //    }
    //    else {
    //        dummy->next = l2;
    //        l2 = l2->next;
    //    }
    //    dummy = dummy->next;
    //}
    //
    //if(l1 != NULL)
    //    dummy->next = l1; 
    //else
    //    dummy->next = l2; 
//
    //return head->next;
}