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


Node<int>* moveToFront(Node<int> *head_ref) {
	// Write your code here
  
    Node<int>* temp=head_ref;int firstvalue,prevvalue,nextvalue;
     firstvalue=temp->data; 
     prevvalue=firstvalue;
     while(temp->next!=NULL){
       
        nextvalue=temp->next->data;
        temp->next->data=prevvalue;
        prevvalue=nextvalue;
        temp=temp->next;
       
     }
        head_ref->data=nextvalue;
        return head_ref;
}
