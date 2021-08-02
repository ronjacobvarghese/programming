
class Node:
    def __init__(self, data):
        self.next = None
        self.prev = None
        self.data = data

class Linklist:
    def __init__(self):
        self.head=None
        self.tail=None
        
    def push(self,data):
        new_node=Node(data)
        new_node.next=self.head
        if self.head is not None:
            self.head.prev=new_node
        else:
            self.tail=new_node
        self.head=new_node
        
    def insertAfter(self,prev_node,data):
        if prev_node is None:
            print("Node does not exist in ll")
            return
        new_node=Node(data)
        new_node.prev=prev_node
        new_node.next=prev_node.next
        prev_node.next=new_node
        
        if new_node.next is not None:
            new_node.next.prev=new_node
        else:
            self.tail=new_node
    
    def insertEnd(self,data):
        new_node=Node(data)
        new_node.prev=self.tail
        if self.tail is not None:
            self.tail.next=new_node
        self.tail=new_node   
    
    def insertBefore(self,next_node,data):
        if next_node is None:
            print('Node not found')
            return
        new_node=Node(data)
        new_node.next=next_node
        new_node.prev=next_node.prev
        if next_node.prev is not None:
            next_node.prev.next=new_node
        else:
            self.head=new_node
        next_node.prev=new_node
        
    def deleteNode(self,del_node):
        if self.head is None:
            print("The link list is empty(delete Node)")
            return
        if del_node is None:
            print("The Node is invalid")
            return
        if del_node.next is not None:
            del_node.next.prev=del_node.prev
        else:
            self.tail=del_node.prev
        if del_node.prev is not None:
            del_node.prev.next=del_node.next
        else:
            self.head=del_node.next
            
    def deleteByPos(self,n):
        temp_node=self.head
        for i in range(n-1):
            temp_node=temp_node.next
        self.deleteNode(temp_node)            
        
        
    def print_list(self):
        temp_node=self.head
        while temp_node is not None:
            print(temp_node.data,end=" ")
            temp_node=temp_node.next
        print()
        
    def print_head(self):
        print(self.head.data)
    
    def prob_func(self,x):
        res=0
        temp_tail=self.tail;temp_head=self.head
        while temp_head is not None:
            while temp_head!=temp_tail:
                if x-temp_head.data-temp_tail.data>self.tail.data:
                    break
                if temp_head.data+temp_tail.data+temp_head.next.data==x:
                    res+=1;print(res,"Triplet:",temp_head.data,temp_tail.data,temp_head.next.data)
                temp_tail=temp_tail.prev
            temp_head=temp_head.next
            return res
                    
    
    
l_list=Linklist()    
for i in range(int(input("The no of value to be entered:"))):
    l_list.push(int(input()))
x=int(input("Target value:"))
print("Output:",l_list.prob_func(x))

