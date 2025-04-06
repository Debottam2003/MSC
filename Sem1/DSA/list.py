l1 = [7,8,9,5,2,3]
l2 = [0] * 3
print(l1)
print(l2)
l1.extend(l2)
print(l1)
a = 5
b = 10
#formatted string
print(f"a = {a} b = {b}")
print("a = {} b = {}".format(5,10))
print("a = {a} b = {b}".format(a = 5,b = 10))
sum = 0
for i in range(1,11):
    sum += i
print(sum)
