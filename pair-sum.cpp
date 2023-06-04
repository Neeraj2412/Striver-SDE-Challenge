/*
Currently partially correct
*/

#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s){
    int left = 0, right = arr.size()-1;
    vector<vector<int> > vrr;
    sort(arr.begin(), arr.end());
    for(int i=0;i<arr.size();i++){   
        if(left > right){
            break;
        }
        if((arr[left] + arr[right]) == s){
              vrr.push_back({arr[left], arr[right]});
        }
        if((arr[left] + arr[right]) < s){
            left++;
        }
        else{
            right--;
        }
    }
    return vrr;
}