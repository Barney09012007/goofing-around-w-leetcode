class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> a(nums.begin(),nums.end());
        int longest =0;
        if (a.empty()) return 0;
        for(int i:a){
            if (!a.contains(i-1)){
                int length=0;
                while (a.contains(i+length)) length+=1;
                    
                longest=max(length,longest);
            }
             
        }return longest;
    }
};
