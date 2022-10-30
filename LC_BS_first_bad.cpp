// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        //binary search:
        long left = 1,
            right = n,
            mid = left + (right - left)/2;

        while(left < right){ //0,4
            mid = left + (right - left)/2;//mid = (right + left)/2; 
            
            if(isBadVersion(mid)) //if true -> first is before
                right = mid; //use this to handle some edge cases 
            else
                left = mid + 1;
        }
        
        if(isBadVersion(left))
            return left;
        else 
            return mid;
    }
};

//1,2,3,4,5,6,7,8,9,10  //7
//6,7,8,9,10
//6,7

//0,1,2,3,4   //4
//3,4
//4

//0,1  //1
//
