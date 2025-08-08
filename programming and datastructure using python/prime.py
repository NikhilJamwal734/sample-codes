def factors(n):
    factor_list=[]
    for i in range(1,n+1):
        if(n%i)==0:
            factor_list.append(i)
    return(factor_list)


def prime(n):
    return(factors(n)==[1,n])

def primeupto(m):
    primelist=[]
    for i in range(1,m+1):
        if prime(i):
            primelist.append(i)
    return(primelist)

def firstprimes(m):
    (count,i,primelist) = (0,1,[])
    while(count < m):
        if prime(i):
            (count,primelist)=(count+1,primelist+[i])
        i=i+1
    return(primelist)

# c=firstprimes(100)
# print(c)

r=primeupto(10)
print(r)