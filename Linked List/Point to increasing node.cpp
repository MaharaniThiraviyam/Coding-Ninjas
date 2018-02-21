/*************
 Following is the Node structure already written.

 template <typename T>
 class Node
 {
	public:
    T data;
    Node<T>* next, *arbit;
    Node(T data)
    {
        this->data=data;
        next=NULL;
        arbit=NULL;
    }
 };
 
*************/


Node<int>* arbit(Node<int> *head){
	
    Node<int> *temp,*tempnode=head;int temp1;
   while(tempnode->next!=NULL){
     temp=tempnode->next;
    while(temp->next!=NULL){
     
      if(tempnode->data>temp->data){
        temp1=tempnode->data;
        tempnode->data=temp->data;
        temp->data=temp1;
      }
      temp=temp->next;
    }
     tempnode=tempnode->next;
   }
  return head;
}
