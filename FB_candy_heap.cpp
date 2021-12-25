/*
You have N bags of candy. The ith bag contains arr[i] pieces of candy, 
and each of the bags is magical!
It takes you 1 minute to eat all of the pieces of candy in a bag 
(irrespective of how many pieces of candy are inside), and as soon as you finish, 
the bag mysteriously refills. If there were x pieces of candy in the bag at the beginning
of the minute, then after you've finished you'll find that floor(x/2) pieces are now inside.
You have k minutes to eat as much candy as possible. How many pieces of candy can you eat?
*/

#include <iostream>
#include <queue>
#include <vector> 
using namespace std; 


int maxCandies(vector <int> arr, int k) {
    int max = 0;
    int top;
    priority_queue <int> qu;
    for (int i = 0; i < arr.size(); i++){
        qu.push(arr[i]); //push the content to the queue to be sorted
    }
    while(k > 0){
        top = qu.top();
        max += top; //take my largest bag 
        qu.pop(); 
        qu.push(top/2);
        k--;
    }
    return max;
}

int main(){

    int k = 3;
    vector <int> input(5);
    input = {2, 1, 7, 4, 2};
    cout << maxCandies(input, k) << endl;

    return 0;
}