def upper(s):
    upper=0
    for c in s:
        if(c.isupper()):
            upper += 1
    return(upper)




sentence=input("enter the sentence")
uL=upper(sentence)
print(uL)