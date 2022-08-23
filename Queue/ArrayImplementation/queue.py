class Queue:
    def __init__(self):
        self.item=[]
        self.front=-1
        self.rear=-1
        self.MAX=5
    
    def isFull(self): 
        if self.front==0 and self.rear==self.MAX-1:
            return True
        return False

    def isEmpty(self):
        if(self.front==-1):
            return True
        return False

    def Enqueue(self,data):
        if(self.isFull()):
            print("Queue Is Full")
            return
        if(self.front==-1):
            self.front=0
        self.rear=self.rear+1
        self.item.append(data)
        print("Enqueued Valus is ",data)

    def Dequeue(self):
        if(self.isEmpty()):
            print("Queue is Empty")
            return
        val=self.item.pop(0)
        print("Poped value is ",val)
        self.front=self.front+1    
        if(self.front==self.rear+1):
            self.front=-1
            self.rear=-1
            

qu=Queue()
qu.Enqueue(10)
qu.Enqueue(20)
qu.Enqueue(30)
qu.Enqueue(40)
qu.Enqueue(50)
qu.Enqueue(60)
qu.Dequeue() 
qu.Dequeue() 
qu.Dequeue() 
qu.Dequeue()    
qu.Dequeue() 
qu.Dequeue()          