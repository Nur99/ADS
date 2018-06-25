/*
Before reading my explanation and code, please read about pigeonhole principle. It will be easier to understand you.

We have an array and given sum, we should find a sum of subset from array which is equal to the given sum.
n = array length, m = given sum;
n = 10^6, m = 10^3

Proved: if n > m, we always have sum of subset which is equal to m!

Why? I can show it with help of example. 

n = 10, m = 8;
If a given array has a number which is divisible to 8, answer is ok. 
But let's restrict our interval and think that we have not those numbers. If we find remainder of the numbers in array dividing to 8, 
we will get 10 numbers in these interval [1,7]. 

If we have both 1 and 7, or 2 and 6, or 3 and 5, or more than one 4s, it means that answer is ok. 
Now interval is [1, 3] and one 4.

You can continue and restrict intervals, however answer is always ok when m < n!


If(n<=m){then time complexity is m^2 and I always wrote solution for this in my subset_sum problem}
*/
