class Stack:
    def __init__(self):
        self.items=[]
        self.top=-1
        self.MAX=5

    def isFull(self):
        if(self.top == self.MAX):
            return True    
        return False 

    def Push(self,data):
        if(self.isFull()):
            print("Stack Is Full")
            return
        self.top=self.top+1
        self.items.append(data)

    def printStack(self):
        for i in range(0,self.top+1):
            print(self.items[i])  

st=Stack()

st.Push(20)
st.printStack()