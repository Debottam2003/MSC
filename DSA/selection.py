def min(l):
  for i in range(len(l)-1):
    min_index = i
    for j in range(i+1,len(l)):
       if l[j] < l[min_index]:
         min_index = j
    l[i],l[min_index] = l[min_index],l[i]
    print(l)
  print(l)
# import random
l = [6, 4, 1, 9, 5, 8, 3, 7, 2]
# for i in range(1,11):
#     l.append(random.randint(1,50))
# print(l)
min(l)
# min([1,2,3,6,4,5])
