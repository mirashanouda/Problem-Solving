/*
Suppose we have a list of N numbers, and repeat the following operation until we're left with only a single number: 
Choose any two numbers and replace them with their sum. 
Moreover, we associate a penalty with each operation equal to the value of the new number, and call the penalty for the entire list 
as the sum of the penalties of each operation.

For example, given the list [1, 2, 3, 4, 5], we could choose, which would transform the list into [1, 5, 4, 5] and incur a penalty of 5. 
The goal in this problem is to find the highest possible penalty for a given input.
*/

#include <bits/stdc++.h>
// Add any extra import statements you may need here

using namespace std;

int total (vector<int> arr, int n, int sum){
    if(arr.size() == 2)
        return sum + arr[0] + arr[1];
    int temp = arr[n-1] + arr[n-2]; 
    arr.pop_back();
    arr.pop_back();
    arr.push_back(temp);
    return sum += total(arr, arr.size(), temp);
}

int getTotalTime(vector <int> arr) {
  // Write your code here
    sort(arr.begin(), arr.end());
    return total(arr, arr.size(), 0); 
}


// These are the tests we use to determine if the solution is correct.
// You can add your own at the bottom.
void printInteger(int n) {
  cout << "[" << n << "]";
}

int test_case_number = 1;

void check(int expected, int output) {
  bool result = (expected == output);
  const char* rightTick = u8"\u2713";
  const char* wrongTick = u8"\u2717";
  if (result) {
    cout << rightTick << "Test #" << test_case_number << "\n";
  }
  else {
    cout << wrongTick << "Test #" << test_case_number << ": Expected ";
    printInteger(expected); 
    cout << " Your output: ";
    printInteger(output);
    cout << endl; 
  }
  test_case_number++;
}

int main() {

  vector <int> arr_1{4, 2, 1, 3};
  int expected_1 = 26;
  int output_1 = getTotalTime(arr_1);
  check(expected_1, output_1);

  vector <int> arr_2{2, 3, 9, 8, 4};
  int expected_2 = 88;
  int output_2 = getTotalTime(arr_2);
  check(expected_2, output_2);
  
  vector <int> arr_3{1, 2, 3, 4, 5};
  int expected_3 = 50;
  int output_3 = getTotalTime(arr_3);
  check(expected_3, output_3);

  // Add your own test cases here
  
}