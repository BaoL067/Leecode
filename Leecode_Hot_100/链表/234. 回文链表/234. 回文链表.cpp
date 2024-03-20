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
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return true;
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *pre = nullptr;
        // 快慢指针找到链表中点，并将slow前面反转
        while(fast != nullptr && fast->next != nullptr)
        {
            fast = fast->next->next;
            ListNode *next = slow->next;
            slow->next = pre;
            pre = slow;
            slow = next;
        }
        if (fast != nullptr) slow = slow->next;
        while(slow != nullptr)
        {
            if(slow->val != pre->val) return false;
            slow = slow->next;
            pre = pre->next;
        }
        return true;
    }
};