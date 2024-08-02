// Given a binary array nums, return the maximum number of consecutive 1's in the array.

// Example 1:

// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int max_count=0;
        int temp_max_count=0;

        for(int i=0;i<nums.size();i++){
            
            if(nums[i]==1) temp_max_count++;
            else temp_max_count=0;

            max_count=max(max_count,temp_max_count);
        }

        return max_count;
    }
};

// TC: O(N)
// SC: O(1)

int findMaxConsecutiveOnes(vector<int>& nums) {
    int pos = 0, mx=0, n=nums.size();
    
    for (auto i=0;i<n;i++) {
        if(nums[i]!=1) {
            mx = max(mx, i-pos);
            pos = i+1;
        }
    }
    mx = max(mx, n-pos);
    return mx;
}

// TC: O(N)
// SC: O(1)
