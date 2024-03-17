#include <cstdio>
#include <cstdlib>

typedef int ElementType;
typedef struct tagNode {
    ElementType Data;
    struct tagNode* nextNode;
}Node;

Node* createNode(ElementType newData) {
    Node* newNode = (Node*)calloc(1, sizeof(Node));
    newNode->Data = newData;
    newNode->nextNode = NULL;
    return newNode;

}

void appendNode(Node** head, Node* newNode) {
    if ((*head) == NULL) {
        *head = newNode;
    }
    else {
        Node* tail = (*head);
        while (tail->nextNode != NULL) {
            tail = tail->nextNode;
        }
        tail->nextNode = newNode;
    }
}

void printList(Node* head) {
    while (head != NULL) {
        printf("%d ", head->Data);
        head = head->nextNode;
    }
}

void insertAfter(Node* current, Node* newnode) {
    newnode->nextNode = current->nextNode;
    current->nextNode = newnode;
}

void orderInsert(Node** head, ElementType a) { 
    Node* newNode = createNode(a);
    if ((*head) -> Data > a) {
        newNode -> nextNode = *head;
        *head = newNode;
    }
    else {
        Node* current = *head;
        while (current -> nextNode != NULL && a > current -> nextNode->Data) {
            current = current -> nextNode;
        }
        insertAfter(current, newNode);
    }
}


void delNode(Node** head, int n) {
    Node* now = (*head);
    Node* prev = NULL;
    int flag = 0;
    if ((*head) == NULL) {
        printf("no delete\n");
        return;
    }
    if ((*head)->Data == n) {
        *head = (*head)->nextNode;
        free(now);
        return;
    }
    prev = now;
    now = now->nextNode;
    while (now != NULL) {
        if (now->Data == n) {
            prev->nextNode = now->nextNode;
            free(now);
            flag = 1;
            break;
        }
        prev = now;
        now = now->nextNode;
    }
    if (flag == 0) {
        printf("no delete\n");
    }
}

void orderInsertNoDuple(Node* head, int data) {
    Node* newNode = createNode(data);
    if(head == NULL) {
        head = newNode;
        appendNode(&head, newNode);
        // printf("%d", saveNode[newNode -> Data]);
    } else {
        if(newNode -> Data != head -> Data) {
            printf("dsadsadsadsad");
        }
    }
    // for(int i = 0; i < 10; i++) {
    //     if(*saveNode != newNode) {
    //         saveNode[i] = newNode;
    //     }
    // }
}
int main() {
    int n;
    Node* head = NULL;
    Node* newNode = NULL;
    Node* now, * next;
    // newNode = createNode(8);
    // appendNode(&head, newNode);
    for(int i = 0; i < 4; i++) {
        scanf("%d", &n);
        orderInsertNoDuple(head,n);
    }
    // newNode = createNode(12);
    // appendNode(&head, newNode);
    // newNode = createNode(24);
    // appendNode(&head, newNode);
    // newNode = createNode(87);
    // appendNode(&head, newNode);
    // printList(head);
    // printf("\n");

    // delNode(&head, 12);
    // printList(head);
    // orderInsert(&head, 100);
    // printf("\n");
    printList(head);
    return 0;
}