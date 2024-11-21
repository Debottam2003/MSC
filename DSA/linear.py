#linear search | sequential search | simple search
arr = []
flag = 0
n = int(input("enter the no elements you want:"))
for i in range(n):
    x = int(input("Enter the element:"))
    arr.append(x)
print("The array is:")
print(arr)
item  = int(input("Enter the item you are looking for:"))
for i in arr:
    if i == item:
        print("Item found at ",arr.index(i)," index")
        flag = 1
        break
if(flag == 0):
    print("Item is not in the array")   

# arr = []
# flag = 0
# n = int(input("enter the no elements you want:"))
# for i in range(n):
#     x = input("Enter the element:")
#     arr.append(x)
# print("The array is:")
# print(arr)
# item  = input("Enter the item you are looking for:")
# for i in arr:
#     if i == item:
#         print("Item found at ",arr.index(i)," index")
#         flag = 1
#         break
# if(flag == 0):
#     print("Item is not in the array") 

    