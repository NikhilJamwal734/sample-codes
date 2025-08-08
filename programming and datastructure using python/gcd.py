# def gcd(m,n):
#     cf=[]  # list of common factors
#     for i in range(1,min(m,n)+1):
#         if (m%i)==0 and (n%i)==0:
#             cf.append(i)
#     return(cf[-1])  # backward index rens from -1 to -m whereas forward index runs from 0 to m-1



# def gcd(m,n):
#     for i in range(1,min(m,n)+1):
#         if (m%i) == 0 and (n%i) ==0:
#             mrcf=i
#     return(mrcf)
    

# fac=gcd(12,16)
# print(fac)



# CALCULATING GCD USING RECURSIVE FUNCTION

def gcd(m,n):
    (a,b)= (max(m,n), min(m,n))
    if a%b == 0:
        return(b)
    else:
        # return(gcd(b,a-b))
        return(gcd(b,a%b)) # EUCLID'S ALGORITHM