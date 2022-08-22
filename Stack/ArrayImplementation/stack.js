class Stack{
    constructor(){
        this.items=[]
        this.t=-1
        this.MAX=5
    }

    isFull(){
        if(this.t == this.MAX)
          return true
        return false  
    }

    push(data){
        //Check if array is Full
        if(this.isFull()){
            console.log("Array is Full")
            return
        }
        this.t=this.t+1
        this.items.push(data)
    }

    printStack(){
        console.log("Will Print Stack From Top")
        let i=this.t
        while(i>=0){
            console.log(this.items[i])
            i--
        }
        console.log("\n")
    }
}

let stack= new Stack()
stack.push(10)
stack.push(20)
stack.push(30)
stack.printStack()