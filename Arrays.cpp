/*
Given a sorted array of N positive integers, find the smallest positive integer S such that S cannot be represented as sum of elements of any subset of the given array set.

https://www.geeksforgeeks.org/find-smallest-value-represented-sum-subset-given-array/
*/
long long findSmallest(long long arr[], int n) {
        // code here
        long long res = 1;
        
        //from 0 to i-1 , represent subset sums 1 to res-1 let's say
        for(int i = 0 ; i < n && arr[i] <= res ; i++){
            //if arr[i] > res , this means that res can't be represented as subset sum 
            //so go out of loop and res is the missing one
            //else , now the subarray 0 to i can represent 1+res+arr[i]-1
            res = res + arr[i];
        }
        
        return res;
    }
};
