#include <iostream>
// Define the structure for a node
struct ListNode {
    int val;
    ListNode* next;
    
    // Constructor to initialize val and next pointer
    ListNode(int value) : val(value), next(nullptr) {}
};

// Function to insert a new node at the end of the linked list
void insertNode(ListNode* &head, int value) {
    ListNode* newNode = new ListNode(value);
    if (head == nullptr) {
        head = newNode;
    } else {
        ListNode* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}
ListNode* mergeTwoLists(ListNode* &list1, ListNode* &list2) {
    if(list1==NULL && list2==NULL) return list1;
    ListNode* temp;
    ListNode* head;
    if(list1!=NULL && list2!=NULL && list1->val<list2->val){
        temp=list1;
        list1=list1->next;
        head=temp;
    }
    else if(list1!=NULL && list2!=NULL){
        temp=list2;
        list2=list2->next;
        head=temp;
    }
    while(list1!=NULL &&  list2!=NULL){
        if(list1->val<list2->val){
            temp->next = list1;
            temp = temp->next;
            list1=list1->next;
        }
        else{
            temp->next = list2;
            temp = temp->next;
            list2=list2->next;
        }
    }
    while(list1!=NULL){
        temp->next = list1;
        temp = temp->next;
        list1=list1->next;
    }
    while(list2!=NULL){
        temp->next = list2;
        temp = temp->next;
        list2=list2->next;
    }
    printList(head);
    return temp;
}


int main() {
    // Create linked list 1
    ListNode* list1 = nullptr;
    // insertNode(list1, 1);
    // insertNode(list1, 2);
    // insertNode(list1, 4);

    // Create linked list 2
    ListNode* list2 = nullptr;
    insertNode(list2, 1);
    // insertNode(list2, 3);
    // insertNode(list2, 4);
    mergeTwoLists(list1,list2);
    return 0;
}
