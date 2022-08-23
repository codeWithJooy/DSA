class Stack:
    def __init__(self):
        self.items=[]
        self.top=-1
        self.MAX=5

    def isFull(self):
        if(self.top == self.MAX):
            return True    
        return False 
    def isEmpty(self):
        if(self.top < -1):
            return True
        return False

    def Push(self,data):
        if(self.isFull()):
            print("Stack Is Full")
            return
        self.top=self.top+1
        self.items.append(data)

    def Pop(self):
        if(self.isEmpty()):
            print("Stack Is Empty")
            return
        val=self.items.pop()
        print("Item Removed is ",val)
        self.top=self.top-1

    def printStack(self):
        for i in range(0,self.top+1):
            print(self.items[i])  

st=Stack()

st.Push(10)
st.Push(20)
st.Push(30)
st.printStack()

st.Pop()
st.printStack()