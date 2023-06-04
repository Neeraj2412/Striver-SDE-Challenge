/* 
We can simply sort the arry using the sort function  O(n log n)
Approch 1 -> Sort(arr, arr + n);
*/ 

/*
We can use an extra space (vector) where we first push the 0's then  1's and then 2's
Time taken to push will be O(N) and extra space will be O(N)
*/

/* 
Optimal Solution O(3N) | No Extra Space
Here we assume our first element to be 0 or 1 or 2 accordingly
we maintain one variable assuming an non-zero element 
in every iteration we update if we found 0's, 1's or 2's accordingly.
*/ 
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int ctr = 0;
   for(int i=0;i<n;i++){
      if(arr[i] == 0){
         swap(arr[i], arr[ctr]);
         ctr++;
      }
   }
   
   int ctr1 = 0;
   for(int i=0;i<n;i++){
      if(arr[i] == 1){
         swap(arr[i], arr[ctr]);
         ctr++;
      }
   }
   int ctr2 = 0;
   for(int i=0;i<n;i++){
      if(arr[i] == 2){
         swap(arr[i], arr[ctr]);
         ctr++;
      }
   }
}