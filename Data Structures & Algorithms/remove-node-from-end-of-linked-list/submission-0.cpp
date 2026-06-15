/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        std::vector<ListNode*> myArray;
        
        while (head != nullptr) {
            myArray.push_back(head);
            head = head->next;
        }

        int index = myArray.size() - n;

        if (index == 0) {
            if(myArray.size() == 1) {
                return nullptr;
            }
            
            return myArray[1];
        } else if (index == myArray.size() - 1) {
            myArray[index - 1]->next = nullptr;
        } else{
            myArray[index - 1]->next = myArray[index + 1];
        }
       
        return myArray[0];
    }
};
