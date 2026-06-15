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
    void reorderList(ListNode* head) {
       std::vector<ListNode*> myArray;

       while (head != nullptr) {
        myArray.push_back(head);
        head = head->next;
       } 

        int l = 0;
        int r = myArray.size() - 1;

        while (l < r) {
            myArray[l]->next = myArray[r];
            l++;
            myArray[r]->next = myArray[l];
            r--;
        }

        myArray[l]->next = nullptr;
    }
};
