class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        unordered_set<int> list;

        for(int i: nums)
        {
            if(list.count(i)) return true;
             list.insert(i);
        }
        return false;
    }
};