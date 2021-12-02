#include <iostream>
#include <vector>
using namespace std;

vector<long long> solve (int N, int Q, vector<int> A, vector<vector<int> > query) {
   // Type your code here
   vector<long long> result; //values of 0LR

   for (int i = 0; i < Q; i++){
       
      if(query[i][0] == 1){ //1XV
         A[query[i][1] - 1] = query[i][2];
      }
      else if (query[i][0] == 0){//0LR
         long long LR = 0;
         for(int l=query[i][1] - 1; l < query[i][2]; i++){
            for (int k = l + 1; k < query[i][2]; k++){
               LR = LR + A[i] * A[k];
            }
         }
         result.push_back(LR);
      }
   }
   return result;
}

int main() {

    vector<int> A(8);
    for(int i = 0; i < 8; i++)
    {
    	cin >> A[i];
    }
    vector<vector<int> > query(8, vector<int>(3));
    for (int i_query = 0; i_query < 8; i_query++)
    {
    	for(int j_query = 0; j_query < 3; j_query++)
    	{
    		cin >> query[i_query][j_query];
    	}
    }

    cout << "input:" << endl;
    for (int i_query = 0; i_query < 8; i_query++)
    {
    	for(int j_query = 0; j_query < 3; j_query++)
    	{
    		cout << query[i_query][j_query];
    	}
        cout << endl;
    }
    
    vector<long long> out_;
    out_ = solve(8, 8, A, query);
    for(int i = 0; i < out_.size(); i++)
    {
    	cout << out_[i] << endl;
    }
}