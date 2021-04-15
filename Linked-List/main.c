#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[100];
    int id;
    int date[3];
    int ly_result;
};

struct node{
    struct student;
    struct node* next;
    int data
}*head;

void insert_at_head(struct node* newp){
    int x;
    printf("please enter the new data node \n");
    scanf("%d",&x);
    newp->data=x;
    newp->next=head;
    head=newp;

};
void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));

    // Terminate if memory not allocated
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }


    // Input data of node from the user
    printf("Enter the data of node 1: ");
    scanf("%d", &data);

    head->data = data; // Link data field with data
    head->next = NULL; // Link address field to NULL


    // Create n - 1 nodes and add to list
    temp = head;
    for(i=2; i<=n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        /* If memory is not allocated for newNode */
        if(newNode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }

        printf("Enter the data of node %d: ", i);
        scanf("%d", &data);

        newNode->data = data; // Link data field of newNode
        newNode->next = NULL; // Make sure new node points to NULL

        temp->next = newNode; // Link previous node with newNode
        temp = temp->next;    // Make current node as previous node
    }
}
void traverseList()
{
    struct node *temp;

    // Return if list is empty
    if(head == NULL)
    {
        printf("List is empty.");
        return;
    }

    temp = head;
    while(temp != NULL)
    {
        printf("Data = %d\n", temp->data); // Print data of current node
        temp = temp->next;                 // Move to next node
    }
}
int main()
{
    int N;
    struct student st1;
    printf("Greetings this is our project! \nplease enter the number of elements in the linked list \n");
    scanf("%d",&N);
    createList(N);
    traverseList();
    struct node* st0;
    st0=(struct node *)malloc(sizeof(struct node));
    insert_at_head(st0);
    traverseList();
    return 0;
}
