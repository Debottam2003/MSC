l1 = []
l1.append([1,2,3,10])
l1.append([4,5,6,11])
l1.append([6,7,8,12])
i = 0
print(len(l1[i]))
n = len(l1)
m = len(l1[i])
for i in range(0,n):
    for j in range(0,m):
        print(" ",l1[i][j],end="")
    print()
l2 = []
l2.append([11,21,31,10])
l2.append([41,51,61,11])
l2.append([61,71,81,12])
i = 0
print(len(l2[i]))
n = len(l2)
m = len(l2[i])
for i in range(0,n):
    for j in range(0,m):
        print(" ",l2[i][j],end="")
    print()
l3 = []
for i in range(0,n):
    l3.append([0]*m)
print(l3)
for i in range(0,n):
    for j in range(0,m):
        l3[i][j] = l1[i][j] + l2[i][j]
for i in range(0,n):
    for j in range(0,m):
        print(" ",l3[i][j],end="")
    print()
l = [[],[]]
i = 0
l[i].append(1)
l[i].append(2)
l[i].append(3)
i = 1
l[i].append(4)
l[i].append(5)
l[i].append(6)
print(l)

