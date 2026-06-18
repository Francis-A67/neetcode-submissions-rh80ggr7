/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        std::unordered_map<Node*, Node*> myMap;

        for (Node* curr = head; curr; curr = curr->next)
            myMap[curr] = new Node(curr->val);
        
        for (Node* curr = head; curr; curr = curr->next) {
            myMap[curr]->next   = curr->next   ? myMap[curr->next]   : nullptr;
            myMap[curr]->random = curr->random ? myMap[curr->random] : nullptr;
        }

        return myMap[head];
    }
};
