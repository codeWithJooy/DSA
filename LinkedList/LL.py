class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class LinkedList:
    def __init__(self):
        self.head=None
    
    def addToStart(self,data):
        newNode=Node(data)
        newNode.next=self.head
        self.head=newNode

    def addAtEnd(self,data):
        newNode=Node(data)
        
        if self.head==None:
            print("Hii")
            newNode.next=self.head
            self.head=newNode
            return

        current=self.head
        while(current!=None):
            current=current.next
        current.next=newNode

    def printLL(self):
        while(self.head!=None):
            print(self.head.data)
            self.head=self.head.next

if __name__=='__main__':
    ll=LinkedList()
    # ll.addToStart(5)
    # ll.addToStart(10)
    ll.addAtEnd(20)
    ll.addAtEnd(40)
    ll.printLL()


