Node* takeInput() {

 int data;
 cin >> data;

 Node *head = NULL; 
 Node *tail = NUll;

 while (data != 1) {

    Node *newNode = new Node(data);

    if(head == NULL) {

      head = newNode;
      tail = newNode;

    }

    else {

       tail -> next = newNode;
       tail = tail -> next;

    }

    cin >> data;

 }
   
   return head;

}