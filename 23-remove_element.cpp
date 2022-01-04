/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. 
The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first 
part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should 
hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory. 
 */


//ERROR: time limit exceeded

#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int> nums) {
    /*
    * first part
    * rerturn k 
    0,1,2,2,3,0,4,2 -- k=2, p=2
    .             .
    */

    int n = (int)nums.size();
    if(n < 2)
        return n;

    int k = 1; 
    int curr = nums[0]; 
    int i = 1; 

    while(curr <= nums[i] && i < n){
        if(curr == nums[i]){
            nums.push_back(-1); 
            nums.erase(nums.begin() + i);
        }
        else {
            curr = nums[i];
            ++k;
            ++i;
        }
    }
    return k; 
}

int main(){
    vector<int> arr = {1,1};
    //0,1,2,2,3,3,4, 0,1,1
    //cur = 0
    //start from 1 
    //if arr[i] == cur --> psuh_back the erase 
    //else i++ and k++
    //k starts from 1 
    //while condition is cur <= arr[i]
    cout << removeElement(arr)<<endl;
    //cout<<"array" <<endl;
    //for(int i = 0; i<arr.size(); i++)
    //    cout <<arr[i] << ", ";

    return 0; 
}
