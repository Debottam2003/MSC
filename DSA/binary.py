def binary(list,item):
    first = 0
    last = len(list) - 1
    while(first <= last):
        mid = (first + last)//2
        if(list[mid] == item):
            return mid
        elif(item > list[mid]):
            first = mid + 1
        else:
            last = mid - 1
    return 0
# list = [1,2,3,4,5,7,8,9]
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
if(index == 0):
    print("Element not found")
else:
    print("Element found at index : ",index)
