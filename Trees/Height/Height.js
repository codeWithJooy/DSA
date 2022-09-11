class Tree{
    constructor(data){
        this.data=data
        this.left=null
        this.right=null
    }
}

const Max=(a,b)=>{
    let max=a
    if(b>max)
      max=b

    return max
}

const heightOfBinaryTree=(root)=>{
    if(root==null){
        return -1
    }
    return 1+Max(heightOfBinaryTree(root.left),heightOfBinaryTree(root.right))
}

let root=new Tree(1)
root.left=new Tree(2)
root.right=new Tree(3)
root.left.left=new Tree(4)
root.left.right=new Tree(5)
root.right.left=new Tree(6)
root.right.right=new Tree(7)

let height=heightOfBinaryTree(root)
if(height!=-1){
    console.log(`Height Of Tree is ${height}`)
}
else{
    console.log("Tree Not Present")
}