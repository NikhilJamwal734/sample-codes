# def upper(s):
#     upper=0
#     for c in s:
#         if(c.isupper()):
#             upper=upper+1
#     return(upper)

# def lower(s):
#     lower =0
#     for c in s:
#         if(c.islower()):
#             lower=lower+1
#     return (lower)

# def character(s):
#     char=0
#     for c in s:
#         char=char+1
#     return(char)

# def words(s):
#     words=1
#     for c in s:
#         if(c == ' '):
#             words=words+1
#     return (words)



# sentence=input("enter the sentence")
# uL=upper(sentence)
# print(f"the upper case in the given letter is : {uL}")
# lL=lower(sentence)
# print(f"the lower case in the given letter is : {lL}")
# char=character(sentence)
# print(f"the character in the given letter is : {char}")
# word=words(sentence)
# print(f"the words in the sentence is :  {word}")




# problem 2nd : calculate the area and perimeter of rectangle and circle
def Area_of_Rectangle(lenth,breadth):
    area = lenth*breadth
    return(area)

def Perimetere_of_recangle(lenth,breadth):
    # lenth =input("length_of_rectangle")
    # breadth =input("breadth_of_rectangle")
    perimeter = 2*(lenth+breadth)
    return(perimeter)

def Area_of_circle(radius):
    # radius= input("enetr the radius ")
    area = 3.14*(radius**2)
    return(area)



lenth =int(input("length_of_rectangle"))
breadth =int(input("breadth_of_rectangle"))
a=Area_of_Rectangle(lenth,breadth)
print(a)

lenth =int(input("length_of_rectangle"))
breadth =int(input("breadth_of_rectangle"))
p=Perimetere_of_recangle(lenth,breadth)
print(p)
