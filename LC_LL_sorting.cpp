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

    //recursion: 
        //base case 
        //if (l1 == NULL) return l2;
        //if (l2 == NULL) return l1;
        //
        //if (l1->val < l2->val) {
        //    l1->next = mergeTwoLists(l1->next, l2);
        //    return l1;
        //}
        //else {
        //    l2->next = mergeTwoLists(l1, l2->next);
        //    return l2;
        //}
        
    //using dummy node: 
    ListNode * dummy, * head;
    head = new ListNode(); //this is important; without it I am not creating a new list 
    dummy = head; 

    while (l1 != NULL && l2 != NULL){
        if(l1->val <= l2->val){
            //cout << "I entered l1\n"; 
            dummy->next = l1;
            l1 = l1->next;
        }
        else {
            //cout << "I entered l2\n"; 
            dummy->next = l2;
            l2 = l2->next;
        }
        //cout << "Dummy:" << dummy->val << endl; 
        
        dummy = dummy->next;
        
    }


    //cout << "Head: " << head->next->val << endl;
    if(l1 != NULL)
        dummy->next = l1; 
    else
        dummy->next = l2; 

    return head->next;
}

int main(){

    ListNode *l1, *l2;

    l1 = new ListNode();
    l2 = new ListNode();

    //l1 = [1,2,4], l2 = [1,3,4]
    ListNode *l11 = new ListNode(), *l111 = new ListNode(); 
    l1->val = 1;
    l1->next = l11;

    l11->val = 2;
    l11->next = l111;

    l111->val = 4;
    l111->next = NULL;
//*********************************************************
    ListNode *l22 = new ListNode(), *l222 = new ListNode(); 
    l2->val = 1;
    l2->next = l22;

    l22->val = 3;
    l22->next = l222;

    l222->val = 4;
    l222->next = NULL;

    l1 = mergeTwoLists(l1, l2);
    while(l1 != NULL){
        cout << l1->val << endl;
        l1= l1->next;
    }
    return 0;
}