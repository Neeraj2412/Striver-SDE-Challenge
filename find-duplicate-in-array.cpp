/*
We can travers the whole array for one particular index ans see if there is the same element at another index or not
Time taken would be near to O(N^2) no extra space
*/

/*
Better Solution would be using a hash map 
time taken would be (nlogn) or (O(N) / O(N^2) in case of collision) 
*/

/*
better solution
O(nlog) time and no extra space
*/

#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	sort(arr.begin(), arr.end());
	for(int i=0;i<n-1;i++){
		if(arr[i] == arr[i+1]){
			return arr[i];
		}
	}
	return -1;
}
