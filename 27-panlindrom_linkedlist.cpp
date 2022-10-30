#include <iostream>
#include <map>
#include <vector>
using namespace std; 



 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 

//bool isPalindrome(ListNode* head) {
//    
//    //if (head->next == NULL)
//    //    return true; 
//    
//    vector<int> v;
//    while(head->next != NULL){
//        v.push_back(head->val);
//        head = head->next; 
//    } 
//    
//    int p1 = 0, p2 = v.size() - 1; 
//    while(p1 < p2){
//        if(v[p1] != v[p2])
//            return false;
//    }
//    return true;
//}

bool isPalindrome(vector<int> v) {
    
    //if (head->next == NULL)
    //    return true; 
    
    //vector<int> v;
    //while(head->next != NULL){
    //    v.push_back(head->val);
    //    head = head->next; 
    //} 
    
    int p1 = 0, 
            p2 = v.size() - 1; 
        while(p1 < p2){
            if(v[p1] != v[p2])
                return false;
            p1++; p2--;
        } 
        return true;
}
int main(){


    //ListNode s = (1, 2 , 2 , 1);
    //ListNode * head = ;
    vector<int> v = {1,2};

    cout << isPalindrome(v) << endl;
    return 0;
}


