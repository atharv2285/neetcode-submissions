class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int n = numbers.size();

        unordered_map <int,int> mp;

        for(int i=0; i < n; i++)
        {
            mp[numbers[i]] = i+1;
        }

        sort(numbers.begin(), numbers.end());

        int i =0;
        int j = n-1;

        while(j>=i)
        {
            int sum = numbers[i]+numbers[j];

            if(sum==target)
            {
                return {mp[numbers[i]],mp[numbers[j]]};
            }
            else if(sum<target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }

        return {mp[numbers[i]],mp[numbers[j]]};

        
    }
};
