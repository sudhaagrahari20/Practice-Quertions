class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int len = nums.size();
        vector<int>arr1;
        vector<int>arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        for(int i =2; i<len; i++){
            if(arr1[arr1.size()-1]>arr2[arr2.size()-1]){
                arr1.push_back(nums[i]);
            }
            else {
                arr2.push_back(nums[i]);
            }
        }
        vector<int>ans;
        for(int i =0; i<arr1.size(); i++){
            ans.push_back(arr1[i]);
            
        }
        for(int i =0; i<arr2.size(); i++){
            ans.push_back(arr2[i]);
        }
        return ans;
        
    }
};
