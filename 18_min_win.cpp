#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

string minWindow(string s, string t) {
    // s < t -- no
    //2 pointers .. at the begining and at the end 
    //counter++ if a letter in s, exist in t by hash map 
    //if the number HM of s < HM of t --> don't increment 
    //start point moves: 
        //letter not in the pattern. 
        //map[s] > map[t]
    
    if (s.size() < t.size() || t.size() == 0 || s.size() == 0)
        return "";
    
    int text [256] = {0}, 
        pattern [256] = {0};  

    for(int i = 0; i < s.size(); i++){
        text[s[i]]++;
    }
    for(int i = 0; i < t.size(); i++){
        pattern[t[i]]++;
    }
    
    int win_len = 0, 
        start = 0, end = 0,
        //front = -1,
        count = 0;
    
    for (int i = 0; i < s.size(); i++){
        //geeksforgeeks -- ork
        if(pattern[s[i]] == 0 || text[s[i]] > pattern[s[i]])
        { 
            text[s[i]]--;
            start++;//3k 
        } //letter is not included // extra letter 
        else  
            count++;//1

        if (count == t.size()){
            cout << "start = " << start << endl; 
            cout << "count = " << count << endl; 
            end = start + count + 1; 
            //break;
        }

    }

    if (count < t.size())
        return ""; 

    return s.substr(start, end);
}

int main(){

    cout << "output: " << minWindow("geeksforgeeks", "ork")<<endl;
    return 0;
}