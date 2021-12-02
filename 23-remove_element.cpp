//ERROR: time limit exceeded

#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int> nums, int val) {
    /*
    * first part
    * rerturn k 
    0,1,2,2,3,0,4,2 -- k=2, p=2
    .             .
    */
    int n = nums.size();
    int k= 0, p1 = 0, p2 = n - 1;
    if(n == 1 && nums[0] == val)
      return 1;
    
    while(p1 <= p2){
        if(nums[p1] == val){
            swap(nums[p1], nums[p2]);
            k++;
            p1++; p2--; 
            //nums.push_back(val);
            //nums.erase(nums.begin() + p);
            //p--;
        }
        else {
            cout << "I entered else" << endl;
            p1++;
        }
    }
    
    return k;
}

int main(){

    cout << "I started" << endl;
    vector<int> arr;
    cout<< removeElement(arr, 2)<<endl;
    //cout<<"array" <<endl;
    //for(int i = 0; i<arr.size(); i++)
    //    cout <<arr[i] << ", ";

    return 0; 
}
