

import random
list=[]

for i in range(1000):
    list.append(random.randint(1,1000))
# print (list)

a= 934
for i in range (len(list)):
    if(a ==list[i]):
        print(f"element foung and its index is{i}")
