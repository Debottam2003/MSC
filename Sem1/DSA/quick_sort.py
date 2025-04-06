def quick_sort(list, start, end):
    if start < end:
        pivot = partition(list, start, end)
        quick_sort(list, start, pivot - 1)
        quick_sort(list, pivot + 1, end)
    return list

def partition(list, start, end):
    pivot = list[start]
    i = start  
    j = end

    while i <= j:
        while i <= j and list[i] <= pivot:
            i += 1
        while i <= j and list[j] >= pivot:
            j -= 1
        if i < j:
            list[i], list[j] = list[j], list[i]

    list[start], list[j] = list[j], list[start]  
    return j

l = [7, 8, 9, 10, 5, 2, 3, 13, 7]
sort_list = quick_sort(l, 0, len(l) - 1)
print(sort_list)
