class Tree:
    def __init__(self,data):
        self.data=data
        self.left=None;
        self.right=None;

    def insert(self,data):
        self.newNode=Tree(data)
        return self.newNode

    def preorder(self,root):
        if(root==None):
           return        
        print("Data is ",root.data)
        self.preorder(root.left)
        self.preorder(root.right)

    def inorder(self,root):
        if(root==None):
           return        
        self.inorder(root.left)
        print("Data is ",root.data)
        self.inorder(root.right)

    
    def postorder(self,root):
        if(root==None):
           return        
        self.postorder(root.left)
        self.postorder(root.right)
        print("Data is ",root.data)        

    def levelOrder(self,root):
        if(root==None):
            return

        #get a queue(list)
        que=[]
        que.append(root)

        while len(que)>0:
            node=que.pop(0)

            #print the data
            print(node.data)  

            #Add Child Node
            if(node.left!=None):
                que.append(node.left)
            if(node.right!=None):        
                que.append(node.right)

root=Tree(10)  
root.left=Tree(20)
root.right=Tree(30)
root.left.left=Tree(40)
root.left.right=Tree(50)
root.right.left=Tree(60)
root.right.right=Tree(70)

print("\nPreOrder Traversal is\n")
root.preorder(root)  
print("\nInOrder Traversal is\n")
root.inorder(root)
print("\nPostOrder Traversal is\n")
root.postorder(root)
print("\nLevelOrder Traversal is\n")  
root.levelOrder(root)
