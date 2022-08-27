class Node{
    constructor(data){
         this.data=data
         this.left=null
         this.right=null
    }
}

function preOrderTraversal(root){
    if(root==null)
        return
        
        console.log(root.data)
        preOrderTraversal(root.left)
        preOrderTraversal(root.right)

}

function inOrderTraversal(root){
    if(root==null)
       return

       inOrderTraversal(root.left)
       console.log(root.data)
       inOrderTraversal(root.right)

}

function postOrderTraversal(root){
    if(root==null)
       return

       postOrderTraversal(root.left)      
       postOrderTraversal(root.right)
       console.log(root.data)

}

function levelOrderTraversal(root){
    if(root==null)
       return
    //Create a Queue
    let queue=[]
    //Add Root to Queue
    queue.push(root)
    while(queue.length !=0 ){
        //Take the front element
        let node=queue.shift()
        //Print the data
        console.log(node.data)

        //Add its left and right children
        if(node.left!=null)
            queue.push(node.left)
        if(node.right!=null)    
            queue.push(node.right)
    }   
}

let root=new Node(1)
root.left=new Node(2)
root.right=new Node(3)
root.left.left=new Node(4)
root.left.right=new Node(5)
root.right.left=new Node(6)
root.right.right=new Node(7)

console.log("Preorder Traversal")
preOrderTraversal(root)

console.log("Inorder Traversal")
inOrderTraversal(root)

console.log("PostOrder Traversal")
postOrderTraversal(root)

console.log("LevelOrder Traversal")
levelOrderTraversal(root)
