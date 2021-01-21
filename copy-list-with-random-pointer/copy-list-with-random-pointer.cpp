            Node *copy = new Node(curr->val);
            curr->next = copy;
            copy->next = next;
​
            curr = next;
        }
        curr = head;
        while (curr)
        {
            if (curr->random)
            {
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }
        curr = head;
        Node *dummyhead = new Node(0);
        Node *clonetail = dummyhead;
        Node *copy = NULL;
        while (curr)
        {
            next = curr->next->next;
            copy = curr->next;
​
            clonetail->next = copy;
            clonetail = copy;
​
            curr->next = next;
​
            curr = next;
        }
        return dummyhead->next;
    }
};
