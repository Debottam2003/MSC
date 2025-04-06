def merge_sort(list):
    if len(list) <= 1:
        return list
    left_half , right_half = split(list)
    left = merge_sort(left_half)
    right = merge_sort(right_half)
    return merge(left,right)
def split(list):
    mid = len(list) // 2
    left = list[:mid]
    right = list[mid:]
    return left,right
def merge(left,right):
    l = []
    i = j = 0
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            l.append(left[i])
            i += 1
        else:
            l.append(right[j])
            j += 1
    l.extend(left[i:])
    l.extend(right[j:])
    return l
l = merge_sort([7,8,9,5,2,3,13])
print(l)
        
        
