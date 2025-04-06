def enqueue(arr,item):
    arr.append(item)
    arr.sort()
    arr.reverse()

def dequeue(arr):
    arr.pop(0)

arr = []
enqueue(arr,'a')
enqueue(arr,'c')
enqueue(arr,'d')
enqueue(arr,'b')
enqueue(arr,'e')
print(arr)
dequeue(arr)
print(arr)
enqueue(arr,'a')
dequeue(arr)
print(arr)





