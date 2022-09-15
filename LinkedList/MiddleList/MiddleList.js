class Node{
    constructor(data){
       this.data=data
       this.next=null
    }
}

class LinkedList{
    constructor(){
        this.head=null
    }

    pushToEnd(data){
        let newNode=new Node(data)
        if(this.head==null){
            this.head=newNode
            return
        }
        let current=this.head
        while(current.next!=null){
            current=current.next
        }
        current.next=newNode

    }

    printAll(){
        let current=this.head
        while(current!=null){
            console.log(current.data)
            current=current.next
        }
    }

    findMiddle(){
        let slow=this.head
        let fast=this.head

        while(fast.next!=null && fast.next.next!=null){
            fast=fast.next.next
            slow=slow.next
        }
        if(fast.next!=null){
            slow=slow.next
        }

        return slow.data
    }

}

let head=new LinkedList()

head.pushToEnd(10)
head.pushToEnd(20)
head.pushToEnd(30)
head.pushToEnd(40)
head.pushToEnd(50)
head.pushToEnd(60)
head.pushToEnd(70)

console.log(`Middle Of the Linked List is ${head.findMiddle()}`)