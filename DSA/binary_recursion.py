def binary(list,item):
   if len(list) == 0:
       return False
   else:
       mid = (len(list)//2)
       if item == list[mid]:
           return 1
       elif item > list[mid]:
           return binary(list[mid+1:],item)
       else:
           return binary(list[:mid-1],item)
       
#list = [1,2,3,4,5,7,8,9]
arr = []
flag = 0
n = int(input("enter the no elements you want:"))
for i in range(n):
    x = int(input("Enter the element:"))
    arr.append(x)
print("The array is:")
print(arr)
item  = int(input("Enter the item you are looking for:"))
index = binary(arr,item)
if(index != True):
    print("Element is not found")
else:
    print("Element is found")
