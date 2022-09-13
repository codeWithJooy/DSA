class Node{
    constructor(data){
        this.data=data
        this.next=null
        this.prev=null
    }
}

class DLL{
    constructor(){
        this.head=null
    }

    addToStart(data){
        let newNode=new Node(data)
        if(this.head==null){
            this.head=newNode
            return
        }

        newNode.next=this.head
        this.head.prev=newNode
        this.head=newNode
    }

    addAtEnd(data){
       let newNode=new Node(data)
       if(this.head==null){
           this.head=newNode
           return
       }

       let current=this.head
       while(current.next!=null){
           current=current.next
       }
       newNode.prev=current
       current.next=newNode
    }
    deleteFromStart(){
        if(this.head==null){
            console.log("List Is Empty")
            return
        }
        this.head.next.prev=null
        this.head=this.head.next
    }

    deleteFromEnd(){
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

    printReverse(){
        let current=this.head
        while(current.next!=null){
            current=current.next
        }
        while(current!=null){
            console.log(current.data)
            current=current.prev
        }
    }
}

let head=new DLL()

head.addToStart(10)
head.addToStart(8)
head.addToStart(6)
head.addToStart(4)
head.addToStart(2)

head.addAtEnd(12)

head.deleteFromStart()

head.deleteFromEnd()

console.log("Print in Correct Order")
head.printAll()

console.log("Print in Reverse Order")
head.printReverse()