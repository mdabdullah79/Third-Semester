

class Queue:
    def __init__(self):
        self.queue = []
    def enqueue(self,item):
        self.queue.append(item)
        print(f"{item} Push in Queue")
    def is_empty(self):
        return len(self.queue)==0
    def dequeue(self):
        if self.is_empty():
            print("The Queue is Empty")
        else:
            print(f"{self.queue[0]} Enqueue From Queue")
            self.queue.pop()
    def front(self):
        return self.queue[0]
    def back(self):
        return self.queue[-1]
    def size(self):
        return len(self.queue)
    def display(self):
        print(self.queue[::-1])



st1 = Queue()
st1.enqueue(15)
st1.enqueue(55)
st1.enqueue(25)
print(st1.front())
st1.dequeue()
print("After Deqeue")
print(st1.front())
