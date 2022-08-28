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

root.preorder(root)    
root.levelOrder(root)
