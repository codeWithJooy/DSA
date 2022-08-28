class Tree{
    constructor(data){
        this.data=data
        this.left=null
        this.right=null
    }
}

const Max=(a,b,c)=>{
    let max=a
    if(b>max)
      max=b
    if(c>max)
      max=c 
    
    return max
}

const maxOfBinaryTree=(root)=>{
    if(root==null){
        return Number.NEGATIVE_INFINITY
    }
    return Max(root.data,maxOfBinaryTree(root.left),maxOfBinaryTree(root.right))
}

let root=new Tree(1)
root.left=new Tree(2)
root.right=new Tree(3)
root.left.left=new Tree(4)
root.left.right=new Tree(5)
root.right.left=new Tree(6)
root.right.right=new Tree(7)

let max=maxOfBinaryTree(root)
if(max!=Number.NEGATIVE_INFINITY){
    console.log(`Maximum Value of Binary Tree is ${max}`)
}
else{
    console.log("No Tree Present")
}

