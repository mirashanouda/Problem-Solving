class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> sol;
        int diff; 
        for (int i = 0; i < nums.size(); i++){
            map[nums[i]] = i;
        }
        
        for (int i = 0; i < nums.size(); i++){
            diff = target - nums[i];
            if (map.find(diff) != map.end() && map.find(diff)->second != i){
                sol.push_back(i);
                sol.push_back(map.find(diff)->second);
                return sol;
            }
        }
        return sol;
    }
};