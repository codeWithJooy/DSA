class Node{
    constructor(d){
        this.data=d
        this.next=null;
    }
}

class LinkedList{
    constructor(){
        this.head=null
    }
    addToStart(data){
        let newData=new Node(data)
        newData.next=this.head
        this.head=newData
    }
    addAtEnd(data){
        let newData=new Node(data)
        
        //Check if LL is empty
        if(this.head==null){
            this.head=newData
        }

        //Navigate to The End of the LinkedList
        let current=this.head
        while(current.next!=null){
            current=current.next
        }
        current.next=newData
    }

    addAfterANode(data,num){
        let newData=new Node(data)

        //Check if LL is Empty
        if(this.head==null){
            console.log("Element not Found")
            return
        }

        let current=this.head
        while(current!=null && current.data!=num){
            current=current.next
        }
        if(current!=null){
            newData.next=current.next
            current.next=newData
            return
        }
        console.log("Element not Found")
    }
    
    addABeforeANode(data,num){
        let newData=new Node(data)

        //Check if LL is Empty
        if(this.head==null){
            console.log("Element not Found")
            return
        }

        let current=this.head
        while(current!=null && current.next.data!=num){
            current=current.next
        }
        if(current!=null){
            newData.next=current.next
            current.next=newData
            return
        }
        console.log("Element not Found")
    }

    deleteFromStart(){
        if(this.head==null){
            console.log("List Is Empty")
            return
        }

        this.head=this.head.next

    }

    deleteFromEnd(){
        if(this.head==null){
            console.log("List Is Empty")
            return
        }

        let current=this.head
        while(current.next.next!=null){
            current=current.next
        }

        current.next=null
    }

    printAll(){
        let current=this.head
        while(current!=null){
            console.log(current.data)
            current=current.next
        }
    }
}

let head=new LinkedList()
head.addToStart(15)
head.addToStart(10)
head.addToStart(5)
head.addAtEnd(30)

head.addAfterANode(20,15)
head.addABeforeANode(25,30)

head.printAll()

console.log("Deletion from Start")
head.deleteFromStart()
head.printAll()

console.log("Deletion from End")
head.deleteFromEnd()
head.printAll()