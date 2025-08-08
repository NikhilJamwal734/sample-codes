def factors(n):
    factorlist=[]
    for i in range(1,n+1):
        if n%i==0:
            factorlist.append(i)
    return(factorlist)

def prime(n):
    return(factors(n)==[1,n])

def prime(n):
    return(len(factors(n))==2)

primelist=[]
for i in range(1,50):
    if(prime(i)):
        primelist.append(i)

print(primelist)