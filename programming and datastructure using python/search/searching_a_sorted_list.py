def binarysearch(v,l):
    if l == []:
        return (False)
    
    m = len(l)//2

    if v == l[m]:
        return(True)
    
    if v<l[m]:
        return (binarysearch(v,1[:m]))
    else:
        return(binarysearch(v,1[m+1:]))