class Queue{
    constructor(){
        this.item=[]
        this.front=-1
        this.rear=-1
        this.MAX=5
    }
    isFull(){
        if(this.front==0 && this.rear==this.MAX-1){
            return true
        }
        return false
    }

    isEmpty(){
        if(this.front==-1)
          return true
        return false  
    }

    Enqueue(data){
        if(this.isFull()){
            console.log("Queue Is Full")
            return
        }
        if(this.front==-1)
           this.front=0;
        this.rear=this.rear+1
        this.item.push(data)   
        console.log(`Enqueued Data Is ${data}`)
    }

    Dequeue(){
        if(this.isEmpty()){
            console.log("Queue Is Empty")
            return
        }
        this.front=this.front+1
        let val=this.item.shift()
        if(this.front==this.rear+1){
            this.front=-1
            this.rear=-1
        }
        console.log(`Value Popped is ${val}`)
    }
}

let qu=new Queue()
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