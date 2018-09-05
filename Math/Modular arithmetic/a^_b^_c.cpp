# Python program to calculate the ans
def calculate(A, B, C, M):
 
    # Calculate B ^ C (mod M - 1)
    res = pow(B, C, M-1)
 
    # Calculate A ^ res ( mod M )
    ans = pow(A, res, M)
 
    return ans
 
# Driver program to run the case
A = 3
B = 9
C = 4
 
# M must be Prime Number
M = 19
print( calculate(A, B, C, M) )
