import matplotlib.pyplot as ab

x=[1,2,3,4,5,6,]
y=[2,4,6,8,10,12]

ab.plot(x,y , color="red", linewidth =2,linestyle="--" ,marker ='.',markersize=14,markeredgecolor ='green')

# short trick ='[color],[marker],[line]'

ab.title("My first graph in python")
ab.xlabel("x axis")
ab.ylabel("y axis")



ab.show()