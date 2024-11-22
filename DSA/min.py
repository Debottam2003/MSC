l = [7,8,9,5,2,3]
min = l[0]
for i in range(1,len(l)-1):
    if l[i] < min:
        min = l[i]
print(min)