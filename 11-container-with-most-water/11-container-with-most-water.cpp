class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1;
        int max_area=0;
        
        while(left<right){
            int left_height=height[left];
            int right_height=height[right];
            
            max_area=max(max_area,(right-left)*min(left_height,right_height));
            
            if(left_height<right_height) left++;
            else right--;
        }
		
        return max_area;
    }
};