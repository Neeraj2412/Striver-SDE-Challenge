/*

*/

/*Two pointer approch*/
#include <bits/stdc++.h>
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	int i = 0, j = 0;
	vector<int> vrr;
	while(i < m && j < n){
		if(arr1[i] < arr2[j]){
			vrr.push_back(arr1[i]);
			i++;
		}
		else{
			vrr.push_back(arr2[j]);
			j++;
		}
	}
	while(i < m){
		vrr.push_back(arr1[i]);
		i++;
	}
	while(j < n){
		vrr.push_back(arr2[j]);
		j++;
	}
	return vrr;
}