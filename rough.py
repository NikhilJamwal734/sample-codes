num=int(input('enter a number'))
fact =1
if(num<0):
    print('not defined')
else:
    while(num>0):
        fact=fact*num
        num=num-1
    print(fact) 