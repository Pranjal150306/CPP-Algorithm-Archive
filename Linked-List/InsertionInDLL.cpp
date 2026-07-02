class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {
        if (head == nullptr) return head;

        Node* temp = head;
        int cnt = 0; 
        while (temp != nullptr) {
            if (cnt == p) break; 
            cnt++;
            temp = temp->next;
        }
        if (temp == nullptr) return head;
        Node* newNode = new Node(x);

        newNode->next = temp->next; 
        newNode->prev = temp;       
        if (temp->next != nullptr) {
            temp->next->prev = newNode;
        }

        temp->next = newNode;

        return head;
    }
};
