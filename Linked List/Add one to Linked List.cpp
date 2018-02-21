/*************
 Following is the Node structure already written.

 template <typename T>
 class Node {
	public:
	T data;
	Node* next;
 
	Node(T data) {
 next = NULL;
 this->data = data;
	}
 
	~Node() {
 if (next != NULL) {
 delete next;
 }
	}
 };
 
*************/


Node<int>* addOne(Node<int> *head) {
	// Write your code here
   Node<int> *temp=head;int count=0,i=0;
   while(temp->next!=NULL){
     temp=temp->next;count++;
   }
     if((temp->data+1!=10))
       temp->data=temp->data+1;
     else{
     temp=head;
       while(temp->next!=NULL){
         if(i==count-1)
           temp->data=temp->data+1;
         temp=temp->next;i++;
       }
        temp->data=0;
     }
    
  return head;
}
