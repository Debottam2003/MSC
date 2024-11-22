def selection_sort(list):
    l = []
    while( len(list) >= 1):
        min = list[0]
        for i in range(0,len(list)):
            if list[i] < min:
                min = list[i]
        l.append(min)
        list.remove(min)
    return l
l = selection_sort([7,8,9,5,2,3])
print(l)