pi=3.14
def circle_perimeter(r):
    return(2*pi*r)

def circle_area(r):
    return(pi*r*r)


def rectangle_perimeter(x,y):
    return(x+x+y+y)

def rectangle_area(x,y):
    return(x*y)


polygon = " "
while(polygon != "exit"):
    print("\nAvailable POLYGONS\ncircle\nrectangle\nexit")
    polygon=input("\nchoose the polygon type or exit: ")

    property =" "
    if(polygon == "circle"):

        r=float(input("Enter the radius of the circle :"))

        while(property == " "):
            print("\nCIRCLE PROPERTIES\narea\nperimeter\nback")
            property=input("\nChoose the circle property or go back")

            if(property == "area"):
                cArea= circle_area(r)
                print(f"area of circle with radius {r} = {cArea} sq. units")


                property =" "
            elif(property == "perimeter"):
                cPerimeter =circle_perimeter(r)
                print(f"perimeter of circle with radius {r} ={cPerimeter}")

                property =" "
            elif(property == "back"):
                break
            else:
                print('Please enter the correct polygon property')


    elif(polygon == "rectangle"):
        l=float(input("\nentere the length of ractangle: "))
        b=float(input("entere the breadth of ractangle: "))

        while(property ==" "):
            print("\nRECTANGLE PROPERTIES\narea\nperimeter\nback")
            property = input("\nChoose the rectangle property or go back : ")

            if(property == "area"):
                rArea=rectangle_area(l,b)
                print(f"Area of ractangle with length {l} and breadth {b} ={rArea}")
                
                property =" "
            elif(property == "perimeter"):
                rPerimeter =rectangle_perimeter(l,b)
                print(f"Perimeter of ractangle with length {l} and breadth {b} ={rPerimeter}")

                property=" "
            elif(property == "back"):
                break
            else:
                print('Please enter the correct polygon property')


    elif(polygon == "exit"):
        break
    else:
        print("Please select the correct polygon type or exit")

