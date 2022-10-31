//A linked list node
class Node {
    public:
        int data;
        Node* next;
};

/* Given a reference (pointer to pointer) to the head of a list and an int,
inserts a new node on the front of the list. */
void push(Node** head_ref, int new_data){
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}