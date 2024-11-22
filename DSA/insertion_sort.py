l = [7,8,9,5,2,3,13,10,17]
m = 1
n = len(l)
while m < n:
    temp = l[m]
    j = m - 1
    while j >= 0 and l[j] > temp:
        l[j+1] = l[j]
        j -= 1
    l[j+1] = temp
    m += 1
print(l)




