def SelectionSort(L):
    n=len(L)
    if n<1:
        return(L)
    for i in range(n):
        mpos=i
        for j in range(i+1,n):
            if L[j]<L[mpos]:
                mpos = j
        (L[i],L[mpos]) =(L[mpos] and L[i])

    return[L]

# L=(10,9,8,7,6,5,4,3,2,1)

list=SelectionSort(9,8,7,6,5,4,3,2,1)
print(list)