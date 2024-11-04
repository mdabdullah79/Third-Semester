

class Stack:
    def __init__(self):
        self.stack = []
    def push(self,item):
        self.stack.append(item)
        print(f"{item} Push in Stack")
    def is_empty(self):
        return len(self.stack)==0
    def pop(self):
        if self.is_empty():
            print("The Stack is Empty")
        else:
            print(f"{self.stack[-1]} Pop From Stack")
            self.stack.pop()
    def top(self):
        return self.stack[-1]
    def size(self):
        return len(self.stack)
    def display(self):
        print(self.stack[::-1])



st1 = Stack()
st1.push(15)
st1.push(55)
st1.push(25)
print(st1.top())
st1.pop()
print("After Pop")
print(st1.top())
