def sum(n):
    if n == 1:
        return 1
    else:
        return n + sum(n-1)
print(sum(500))
def sum_list(list):
    if list == []:
        return 0
    else:
        return list[0] + sum_list(list[1:])
# print(sum_list([7,8,9,5,2,3]))
print(sum_list([]))