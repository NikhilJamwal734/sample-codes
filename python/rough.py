def circle_Area(r):
    return(3.14*r*r)

def circle_Perimeter(p):
    return(2*3.14*r)

def area_rectangle(l,b):
    return(l*b)

def perimeter_rectangle(l,b):
    return(2*(l+b))

polygon =" "

while(polygon != "exit"):

    print("\nAVAILABLE POLYGONS\n\ncircle\nrectangle\nexit")
    polygon=input('\nPlease select the polygon ')

    property =" "
    if(polygon=="circle"):

        r=float(input("\nenter the radius of circle : "))

        while(property ==" "):
            print("CIRCLE PROPERTY\n\nArea\nCircumference\nback")
            property=input("Choose the circle property or go back :")

            if(property == "area"):
                cArea = circle_Area(r)
                print(f"The area of circle with radius {r} is {cArea}")

            elif(property == "circumference"):
                cPerimeter = circle_Perimeter(r)
                print(f"The circumference of circle with radius {r} is {cPerimeter}")
            
            elif(property == "break"):
                break

            else:
                print("choosethe correct option")


    elif(polygon == "rectangle"):

        l=float(input("\nenter the length of rectangle:"))
        b=float(input("enter the breadth of rectangle"))

        while(property == ' '):

            print('\nPROPERTIES OF RECTANGLE\n\narea\nperimeter\nback')
            property =input("\nChoose the property or go back:")

            if(property == "area"):
            
                rArea=area_rectangle(l,b)
                print(f"\nThe area of rectangle with length {l} and breadth {b} is {rArea}")

            elif(property == "perimeter"):
                rperimeter=perimeter_rectangle(l,b)
                print(f"The perimeter of rectangle with lenght {l} and breadth {b} is {rperimeter}")

            elif(property == "back"):
                break

            else:
                print("\nPlease enter the correct property")
            
    elif(polygon == "exit"):
        break

    else:
        print("Please enter the correct polygon type or exit\n")
        


   

