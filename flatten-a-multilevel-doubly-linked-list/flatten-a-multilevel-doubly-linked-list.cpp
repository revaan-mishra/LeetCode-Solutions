class Solution {
public:
    Node* flatten(Node* head) {
        if (!head) return head;
        
        Node* curr = head;
        
        while(curr)
        {
            if(!curr->child)
                curr = curr->next;
            else
            {
                Node* tail = curr->child;
                
                while(tail->next)
                        tail= tail->next;
               
                tail->next = curr->next;
                
                if(tail->next)
                    tail->next->prev = tail;
                    
                curr->next = curr->child;
                curr->next->prev = curr;
                curr->child=NULL;
            }
 
        }
return head;
    }
};
