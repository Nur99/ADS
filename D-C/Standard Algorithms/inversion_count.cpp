Inversion count is a count which defines how far array is from being sorted. 

The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).

Easy solution is O(n^2), we just count how many elements are higher from current element. 

We can write function of merge sort and count how many times there were inversion during merge function. 
Time complexity of merge sort is O(nlogn)
