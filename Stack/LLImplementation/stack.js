class Node{
    constructor(data){
        this.data=data
        this.next=null
    }
}

class Stack{
    constructor(){
        this.head=null
    }
    push(data){
        let newNode=new Node(data)

        newNode.next=this.head
        this.head=newNode
    }
    pop(){
        console.log(`Element Popped is ${this.head.data}`)
        this.head=this.head.next
    }
    printStack(){
        while(this.head!=null){
            console.log(this.head.data)
            this.head=this.head.next
        }
    }
}

let st=new Stack()
st.push(25)
st.push(15)
st.push(35)
st.pop()
st.printStack()