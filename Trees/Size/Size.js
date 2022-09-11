class Tree{
    constructor(data){
        this.data=data
        this.left=null
        this.right=null
    }
}

const sizeOfBinaryTree=(root)=>{
    if(root==null)
      return 0;
    return 1+sizeOfBinaryTree(root.left)+sizeOfBinaryTree(root.right)  
}

let root=new Tree(10)
root.left=new Tree(20)
root.right=new Tree(30)
root.right.left=new Tree(50)
root.right.right=new Tree(80)


let size=sizeOfBinaryTree(root)
console.log(`Size of Binary Tree is ${size}`);