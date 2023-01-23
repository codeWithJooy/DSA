class Stack{
    constructor(size){
        this.items=[]
        this.size=size
    }
    isEmpty(){
        return this.items.length==0
    }
    isFull(){
        return this.items.length==this.size
    }
    push(element){
        if(!this.isFull()){
            this.items.push(element)
            console.log(`Item ${element} pushed to stack successfully`)
            return
        }
        console.log("Stack Is Full Cannot add more")
        return   
    }
    pop(){
        if(!this.isEmpty()){
            let element=this.items.pop()
            console.log(`${element} removed successfully`)
        }
        else{
            console.log("Sorry Stack Is Empty")
        }
    }
    peek(){
        if(!this.isEmpty()){
            console.log(this.items[this.items.length-1])
        }
        else{
            console.log("Stack Is Empty")
        }
    }
    printStack(){
        let str=''
        for(let i=0;i<this.items.length;i++){
            str+=this.items[i]+" "
        }
        console.log(str)
    }
    
}

let stack=new Stack(5)
stack.push(10)
stack.push(20)
stack.push(30)
stack.pop()
stack.printStack()