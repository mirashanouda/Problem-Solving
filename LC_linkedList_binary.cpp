/*
Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

Return the decimal value of the number in the linked list.
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

int getDecimalValue(ListNode* head) {

    ListNode *temp = head;
    int count = 0, ans = 0;
    while (temp->next != NULL){
        count++;
        temp = temp->next;
    }//counting the number of elements - 1

    temp = head; 
    while(temp != NULL){
        ans += temp->val * pow(2, count);
        count--;
        temp = temp->next;
    }

    return ans;

}

