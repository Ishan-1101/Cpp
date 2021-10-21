// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         int d=0,la,lb;
//         la=length(headA);
//         lb=length(headB);
//         ListNode *ptr1;
//         ListNode *ptr2;
//         if(la<lb)
//         {
//             d=lb-la;
//             ptr1=headB;
//             ptr2=headA;
//         }
//         else{
//             d=la-lb;
//             ptr1=headA;
//             ptr2=headB;
//         }
//         while(d)
//         {
//             ptr1=ptr1->next;
//             if(ptr1==NULL)
//             return NULL;
//             d--;
//         }
//         while(ptr1!=NULL&&ptr2!=NULL)
//         {
//             if(ptr1==ptr2)
//             return ptr1;
//             ptr1=ptr1->next;
//             ptr2=ptr2->next;
//         }
//         return NULL;
        
//     }
//     int length(ListNode *head)
//     {
//         int l=0;
//         ListNode *temp=head;
//         while(temp!=NULL)
//         {
//             temp=temp->next;
//             l++;
//         }
//         return l;
//     }
// };