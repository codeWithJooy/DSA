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
    printAll(){
        let current=this.head
        while(current!=null){
            console.log(current.data)
            current=current.next
        }
    }
}

let head=new LinkedList()
head.addToStart(5)
head.addToStart(10)
head.printAll()