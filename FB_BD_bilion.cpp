#include <bits/stdc++.h>
// Add any extra import statements you may need here

using namespace std;

// Add any helper functions you may need here

double getSum(vector <float> growthRates, int mid){
    double sum = 0; 
    for(int j = 0; j < growthRates.size(); ++j){
      sum += pow(growthRates[j],mid);
    }
    return sum; 
}
//binary search: 
int getBillionUsersDay(vector <float> growthRates) {
  // reach 10^9 
  // g ^ t --> g: rate, t -> the time
  double sum = 0;
  int start = 1, 
    end = INT_MAX,
    mid;
  int n = growthRates.size(); 
  while(start < end){
    mid = start + (end - start)/2; //to not have an overflow
    sum = getSum(growthRates, mid);
    cout << "sum = " << sum << ", start = " << start << ", end = " << end << ", mid = " << mid <<endl;
    if (sum == 10e9)
      return mid;
    else if (sum > 10e9)
      end = mid;
    else 
      start = 1 + mid; 
  }
        
    return start; 
}

// These are the tests we use to determine if the solution is correct.
// You can add your own at the bottom.
void printInteger(int n) {
  cout << "[" << n << "]";
}

int test_case_number = 1;

void check(int expected, int output) {
  bool result = (expected == output);
  if (result) {
    cout << "Test #" << test_case_number << "\n";
  }
  else {
    cout << "Test #" << test_case_number << ": Expected ";
    printInteger(expected); 
    cout << " Your output: ";
    printInteger(output);
    cout << endl; 
  }
  test_case_number++;
}

int main() {

  vector <float> test_1{1.1, 1.2, 1.3};
  int expected_1 = 79;
  int output_1 = getBillionUsersDay(test_1);
  check(expected_1, output_1);

  //vector <float> test_2{1.01, 1.02};
  //int expected_2 = 1047;
  //int output_2 = getBillionUsersDay(test_2);
  //check(expected_2, output_2);
  //
  //vector <float> test_3{1.5};
  //int expected_3 = 52;
  //int output_3 = getBillionUsersDay(test_3);
  //check(expected_3, output_3);

  // Add your own test cases here
  
}