/*
 * @lc app=leetcode.cn id=876 lang=cpp
 * @lcpr version=30104
 *
 * [876] 链表的中间结点
 */

// @lc code=start
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
    ListNode* middleNode(ListNode* head) {
       ListNode *fast=head;
       ListNode *slow=head;
       while (fast!=nullptr&&fast->next!=nullptr) {
         fast=fast->next->next;
         slow=slow->next;
       } 
       return slow;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,3,4,5]\n
// @lcpr case=end

// @lcpr case=start
// [1,2,3,4,5,6]\n
// @lcpr case=end

 */

