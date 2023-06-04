/*
Brute force solution O(N^2)
we can travers for every index the whole array ans see if it appers more than n/2 times;
*/

/*Better solution would be using a hash map*/

/*
Optimal 
More's voting algorithm
*/

#include <bits/stdc++.h>
int findMajorityElement(int arr[], int n) {
	int res = 0, ctr = 1;
    for(int i=1;i<n;i++){
        if(arr[i] != arr[i-1]){
            ctr--;
        }
        else{
            ctr++;
        }
        if(ctr == 0){
            res = i;
            ctr = 1;
        }
    }
    int newCtr = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == arr[res]){
            newCtr++;
        }
    }
    if(newCtr > n/2) return arr[res];
    return -1;
}