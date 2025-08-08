l= [54,22,45,65,56,76,67,77,98,89]
x=[]
while(len(l)>0):
        min=l[0]
        for i in range(len(l)):
         if l[i]<min:
                min=l[i]

        l.remove(min)
        x.append(min)

print(l)
print(x)