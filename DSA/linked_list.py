class node:
    data = None
    next_node = None
    def __init__(self,data):
        self.data = data
    def __repr__(self):
        return "data:%s"%self.data

class linked_list:
    head = None
    def __init__(self):
        self.head = None
    def empty(self):
        return self.head == None
    def size(self):
        temp = self.head
        count = 0
        while temp != None:
            count += 1
            temp = temp.next_node
        print(count)
    def add(self,data):
        newnode = node(data)
        newnode.next_node = self.head
        self.head = newnode
    def display(self):
        temp = self.head
        while temp != None:
            print(temp.data,"-> ",end="")
            temp = temp.next_node
        print("Null")
    def append(self,data):
        newnode = node(data)
        if self.head == None:
            self.head = newnode
        temp = self.head
        while temp.next_node != None:
            temp = temp.next_node
        temp.next_node = newnode
        newnode.next_node = None
    def search(self,key):
        current = self.head
        while current != None:
            if current.data == key:
                return "{} is there in the linked_list".format(current)
            else:    
                current = current.next_node
        return "Item is not there in the linked_list"
    def insert(self,data,index):
        if index == 0:
            self.add(data)
        if index > 0:
            newnode = node(data)
            position = index
            Current = self.head
            while position > 1:
                Current = Current.next_node
                position -= 1
            prev = Current
            next = Current.next_node
            prev.next_node = newnode
            newnode.next_node = next
    def length(self):
        temp = self.head
        count = 0
        while temp != None:
            temp = temp.next_node
            count += 1
        print("length of the linked_list:",count)
    def remove(self,key):
        temp = self.head
        prev = None
        found = False
        while temp != None and not found:
            if key == temp.data:
               found = True
               if prev == None:
                  self.head = temp.next_node
               else:
                   prev.next_node = temp.next_node
            else:
                prev = temp
                temp = temp.next_node

        if not found:
            print("The item you want to delete is not there.")
                      
n1 = node(10)
print(n1)
n2 = node(20)
n1.next_node = n2
n3 = node(30)
n2.next_node = n3
print(n1.next_node)
l = linked_list()
l.head = n1
l.display()
print(l.empty())
l.add(40)
l.append(50)
l.display()
print(n2)
l.size()
s = l.search(60)
print(s)
l.insert(60,5)
l.display()
l.add(70)
l.display()
l.length()
l.remove(70)
l.display()
l.length()