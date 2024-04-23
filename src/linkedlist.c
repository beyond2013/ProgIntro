#include <stdio.h>
#include <stdlib.h>

// Define a node structure
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// Function prototypes
Node *createNode(int data);
void insertAtBeginning(Node **head, int data);
void printList(Node *head);

int main()
{
    // Initialize head to NULL for an empty list
    Node *head = NULL;

    // Insert elements at beginning
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 1);

    // Print the list
    printf("Linked list: ");
    printList(head);

    return 0;
}

// Create a new node with the given data
Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insert a new node at the beginning of the list
void insertAtBeginning(Node **head, int data)
{
    Node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Print the data of each node in the list
void printList(Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
