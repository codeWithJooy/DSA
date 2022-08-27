class Node{
    constructor(data){
        this.data=data
        this.left=null
        this.right=null
    }
}

function inorder(root){
    if(root==null)
      return
    inorder(root.left)
    console.log(root.data)
    inorder(root.right)

}


function insert(root,data){
    
    if(root==null){
        let newNode=new Node(data)
        return newNode
    }   
    if(root.data > data)
      root.left=insert(root.left,data)
    else if(root.data < data)
      root.right=insert(root.right,data)
      
    return  root
}

function search(root,num){
    if(root==null){
        console.log("Number Not Present")
        return
    }
    if(root.data==num){
        console.log("Number Present")
        return
    }
    else if(root.data > num){
        search(root.left,num)
    }
    else{
        search(root.right,num)
    }
}

let root=new Node(10)
root=insert(root,5)
root=insert(root,15)
root=insert(root,15)
root=insert(root,16)
root=insert(root,12)
root=insert(root,3)
root=insert(root,8)

inorder(root)
search(root,3)