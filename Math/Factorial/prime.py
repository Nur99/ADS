#if k is prime, then ((k-1)!+1) % k == 0

# Prints prime numbers smaller than n 
def primesInRange(n) : 
  
    # Compute factorials and apply Wilson's  
    # theorem. 
    fact = 1
    for k in range(2, n): 
        fact = fact * (k - 1) 
        if ((fact + 1) % k == 0): 
            print k 
  
# Driver code 
n = 15
primesInRange(n)
