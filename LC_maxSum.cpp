/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.
*/

//2 vars, one for the max sum and one for the sum so far for the contanous sub

#include <bits/stdc++.h>
using namespace std; 
int maxSubArray(vector<int>& nums) {
    if (nums.size() == 1){
        return nums[0]; 
    }
    
    int sum = INT_MIN;
    int tempSum = 0; 
    for(int i = 0; i < (int)nums.size(); i++){
        tempSum += nums[i]; //4,8
        if (tempSum < nums[i]){
            tempSum = nums[i]; //-2,-1,0,1,4
        }
        if(sum < tempSum)
            sum = tempSum; //-2,-1,0,1,5
    }
    
    return sum; 
}



//-2, -1, 0 , 1 , 4 , -1, 4