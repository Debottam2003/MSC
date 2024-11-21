def bubble_sort(l):
    for i in range(0,len(l)):
        for j in range(0,(len(l)-i-1)):
            if l[j] > l[j+1]:
                l[j],l[j+1] = l[j+1],l[j]
    print(l)
l = [7,8,9,5,2,17,17,3,10,13]
bubble_sort(l)