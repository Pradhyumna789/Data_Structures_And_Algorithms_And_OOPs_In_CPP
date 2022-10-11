Node *reverseLinkedListRec(Node *head){
    
    if (head == NULL || head -> next == NULL) {
        
        return head;
        
    }
    
    
    Node *temp = reverseLinkedListRec(head -> next);
    head -> next -> next = head;
    head -> next = NULL;
    
    return temp;
    
    
    
 }