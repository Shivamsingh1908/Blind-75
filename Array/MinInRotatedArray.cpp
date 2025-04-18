#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums){
    int n=nums.size();
    int left=0, right=n-1;

    while(left<right){
        int mid=left+(right-left)/2;
        
        if(nums[mid]>nums[right]){
            left=mid+1;
        }
        else{
            right=mid;
        }
    }
    //when loops end left==right, which is minimum
 return nums[left];
}

int main(){
    vector<int>arr={3,4,5,1,2};
    int minElement=findMin(arr);
    cout<<"Minimim Element in rotated array is "<<minElement<<endl;
    return 0;
}