int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    struct Node *temp1,*temp2;
    temp1=headA;temp2=headB;
    while(temp1!=NULL){
        if(temp1->data !=temp2->data)
            return 0;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    if((temp1==NULL) && (temp2==NULL))
     return 1;
    else
     return 0;
}
