/*
Given a non-negative integer x, compute and return the square root of x.

Since the return type is an integer, the decimal digits are truncated, and only the integer part of the 
result is returned.

Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5.
*/

#include <bits/stdc++.h>
using namespace std;


//Idea: binary search 
int mySqrt(int x) {
        if (x <= 1)
            return x;
        
        long start = 1,
            end = x, 
            ans; 
        
        while(end > start){
            ans = (end + start)/2; //6
            printf("ans = %d\n", ans);
            if(ans == x/ans) 
                return ans; 
            else if (ans > x/ans) {//
                end = ans; //not ans - 1 to handle sqrt(5)
                printf("end = %d\n", end);
            }
            else{ //ans < x/ans
                start = ans + 1;
                printf("start = %d\n", start);
            }
        }
        
        //to handle the case if we missed the correct ans in the previous half 
        //this happens when the required sqrt is less than the number 
        //like sqrt(12) = 3 not 4
        //and sqrt(8) = 2 not 3
        if(ans > x/ans)
            ans = ans - 1;
    

        printf("final ans = %d\n", ans);
        return ans;  
    } 

int main(){

    //1, 2,3,4
    cout << mySqrt(8) << ", " << sqrt(8) << "\n"; 
    return 0;
} 

//1 - 5 mid:3
//1 - 2