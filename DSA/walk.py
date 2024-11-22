# def walk_loop(n):
#     for i in range(1,n+1):
#         print(i,end="")
# def walk_recursion(i,j):
#     if i <= j:
#         print(i,end="")
#         walk_recursion(i+1,j)
# def walk(n):
#     if n <= 10:
#         print(n,end="")
#         walk(n+1)

# walk_loop(10)
# print()
# walk_recursion(1,10)
# print()
# walk(1)
# def fact(n):
#     if n <= 1:
#         return 1
#     else:
#         return n * fact(n-1)
# f = fact(7)
# print(f)
def power(i,j):
    if j == 0:
        return 1
    elif j == 1:
        return i
    else:
        return i * power(i,j-1)
print(power(2,8))
