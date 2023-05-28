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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        int carry = 0;
        ListNode* res =new ListNode (), *head = new ListNode ();
        head = res;
        while (l1 != NULL && l2 != NULL)
        {
            ListNode* ans = new ListNode ();
            
            ans -> val = (l1 -> val + l2 -> val + carry) % 10;
            if (l1 -> val + l2 -> val + carry >= 10)
                carry = 1;
            else
                carry = 0;
            res -> next = ans;
            res = res -> next;
            l1 = l1 -> next;
            l2 = l2 -> next;
            cout << ans -> val << " ";
        }

        while (l1 != NULL)
        {
            ListNode* ans = new ListNode ((l1 -> val + carry) % 10);
            if (l1 -> val + carry >= 10)
                carry = 1;
            else
                carry = 0;
            res -> next = ans;
            res = res -> next;
            l1 = l1 -> next;
        }
        while (l2 != NULL)
        {
            ListNode* ans = new ListNode ((l2 -> val + carry) % 10);
            if (l2 -> val + carry >= 10)
                carry = 1;
            else 
                carry = 0;
            res -> next = ans;
            res = res -> next;
            l2 = l2 -> next;
        }
        if (carry == 1)
        {
            res -> next = new ListNode (1);
        }
        head = head -> next;
        return head;
    }
};