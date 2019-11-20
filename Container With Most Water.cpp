// Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.

// Note: You may not slant the container and n is at least 2.
class Solution {
public:
    int maxArea(vector<int>& height) {
        //area = a * b 
        //go through each other (item + 1)  of the vector and calculate it's area with all the rest and store into another vector<vector<int>>
        //start from all the max widths then go to shorter widths.. so basically faoring width over height at begining
        
        //because the height of the container is determined by the shortest that means that in order to get the heightest water you have to know which is the heighest line each time to get the most water
        
        
    int k=0 ,n=height.size();
    int i=0, j=n-1;
    
    while(i<j)
    {
        k = max(k, (j-i)*(min(height[i], height[j])));
        if(height[i]<height[j])
            i++;
        else
            j--;
    }
    return k;

    

    }
};
