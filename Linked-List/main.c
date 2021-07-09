#include <stdio.h>
#include <stdlib.h>
struct student {
    char name[100];
    int id;
    int day,month,year;
    int ly_result;
};
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> dynamicarray

struct node{
    struct student st;
    struct node* next;
    int data;
};

<<<<<<< HEAD
struct node* insert_at_head(struct node* newN,struct node* head){       /*el newp deh eh new node ely h3mlo insert*/
    int x;
=======
struct node* insert_at_head(struct node* newN,struct node* head){       /*newN node to be inserted*/
    int x;
    printf("-------------------------------------------------------------\n");
>>>>>>> dynamicarray
    printf("please enter the data of the new student which will be the head \n");
    printf("Please enter the Name: ");
    scanf("%s",&newN->st.name);
    printf("Please enter the ID: ");
    scanf("%d",&newN->st.id);
    printf("Please enter the Birthday:\nday: ");
    scanf("%d",&newN->st.day);
    printf("month: ");
    scanf("%d",&newN->st.month);
    printf("year: ");
    scanf("%d",&newN->st.year);
    printf("Please enter the last year result: ");
    scanf("%d",&newN->st.ly_result);
    //newp->st.id=x;
    newN->next=head;
    head=newN;
    return head;

};
void insert_at_middle(struct node* newN,struct node* head){
    int x;
    int y;
<<<<<<< HEAD
=======
    printf("-------------------------------------------------------------\n");
>>>>>>> dynamicarray
    printf("please enter the index of the node to be inserted \n");
    scanf("%d",&x);
    struct node* temp;
    temp=head;
    for (int i=0;i<x-1;i++){
        temp= temp->next;
        }
    printf("please enter the data of the new student \n");
    printf("Please enter the Name: ");
    scanf("%s",&newN->st.name);
    printf("Please enter the ID: ");
    scanf("%d",&newN->st.id);
    printf("Please enter the Birthday:\nday: ");
    scanf("%d",&newN->st.day);
    printf("month: ");
    scanf("%d",&newN->st.month);
    printf("year: ");
    scanf("%d",&newN->st.year);
    printf("Please enter the last year result: ");
    scanf("%d",&newN->st.ly_result);
    newN->next=temp->next;
    temp->next=newN;
};


void insert_at_end(struct node* newN,struct node* head){
    struct node* temp;
    int x;
    temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
<<<<<<< HEAD

=======
    printf("-------------------------------------------------------------\n");
>>>>>>> dynamicarray
    printf("please enter the data of the new student which will be the tail \n");
    printf("Please enter the Name: ");
    scanf("%s",&newN->st.name);
    printf("Please enter the ID: ");
    scanf("%d",&newN->st.id);
    printf("Please enter the Birthday:\nday: ");
    scanf("%d",&newN->st.day);
    printf("month: ");
    scanf("%d",&newN->st.month);
    printf("year: ");
    scanf("%d",&newN->st.year);
    printf("Please enter the last year result: ");
    scanf("%d",&newN->st.ly_result);
    temp->next=newN;
    newN->next=NULL;

};

<<<<<<< HEAD
struct node* createList(int n)
{
=======
struct node* createList(int n){
>>>>>>> dynamicarray
    struct node *newNode, *temp, *head;
    int i;

    head = (struct node *)malloc(sizeof(struct node));

    // Terminate if memory not allocated
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }


    // Input data of node from the user
    printf("Enter the data of student 1: \nPlease enter the Name: ");
    scanf("%s",&head->st.name);
    printf("Please enter the ID: ");
    scanf("%d",&head->st.id);
    printf("Please enter the Birthday:\nday: ");
    scanf("%d",&head->st.day);
    printf("month: ");
    scanf("%d",&head->st.month);
    printf("year: ");
    scanf("%d",&head->st.year);
    printf("Please enter the last year result: ");
    scanf("%d",&head->st.ly_result);

    //head->data = x; // Link data field with data
    head->next = NULL; // Link address field to NULL
    //head->st.id=x;

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

    printf("Enter the data of student %d: \nPlease enter the Name: ",i);
    scanf("%s",&newNode->st.name);
    printf("Please enter the ID: ");
    scanf("%d",&newNode->st.id);
    printf("Please enter the Birthday:\nday: ");
    scanf("%d",&newNode->st.day);
    printf("month: ");
    scanf("%d",&newNode->st.month);
    printf("year: ");
    scanf("%d",&newNode->st.year);
    printf("Please enter the last year result: ");
    scanf("%d",&newNode->st.ly_result);

        //newNode->data = x; // Link data field of newNode
        newNode->next = NULL; // Make sure new node points to NULL
       // newNode->st.id=x;
        temp->next = newNode; // Link previous node with newNode
        temp = temp->next;    // Make current node as previous node
    }
    return head;
}
<<<<<<< HEAD
void traverseList(struct node *head)
{
=======
void traverseList(struct node *head){
>>>>>>> dynamicarray
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
<<<<<<< HEAD
=======
        printf("-------------------------------------------------------------\n");
>>>>>>> dynamicarray
        printf("Name: %s\nID = %d\nbirthday : %d / %d / %d\nlast year result : %d\n", temp->st.name,temp->st.id,temp->st.day,temp->st.month,temp->st.year,temp->st.ly_result); // Print data of current node
        temp = temp->next;                 // Move to next node
    }
}
<<<<<<< HEAD
int main()
{
    int N;
    struct student st1;
    struct node* head1;
    printf("Greetings this is our project! \nPlease enter the number of elements in the linked list \n");
    scanf("%d",&N);
    head1=createList(N);
    traverseList(head1);
    struct node* st0;
    struct node* st7;
    struct node* st8;
    st0=(struct node *)malloc(sizeof(struct node));
    st7=(struct node *)malloc(sizeof(struct node));
    st8=(struct node *)malloc(sizeof(struct node));
    head1=insert_at_head(st0,head1);
    traverseList(head1);
    insert_at_middle(st7,head1);
    traverseList(head1);
    insert_at_end(st8,head1);
    traverseList(head1);
=======
=======
>>>>>>> dynamicarray
int n;
int end=-1;
int end_empty=-1;
void insert_begin(struct student* ptr, struct student obj1){   // function to insert at the beginning of the array
if(end+1==n){
        n=2*n;
ptr=(struct student*)realloc(ptr,sizeof(struct student)*n*2);

}
end++;
int i;
for(i=n-1;i>0;i--){
*(ptr+i)=*(ptr+i-1);
}
*ptr=obj1;
}
void insert_end(struct student* ptr, struct student obj1){ // function to append at the end of the array
if(end+1==n){
        n=2*n;
ptr=(struct student*)realloc(ptr,2*n);
}
int index_end=0;
if(end<end_empty){
    index_end=end_empty;

}
else{
    index_end=end;
}
index_end++;
end++;
*(ptr+index_end)=obj1;
}
void insert_middle(struct student *ptr,struct student obj2, int index){ // function to insert at any index of the array
end_empty=index;
if(end+1==n){
ptr=(struct student*)realloc(ptr,2*n);
n=2*n;
}
end++;
int i;
for(i=n-1;i>index;i--){
    *(ptr+i)=*(ptr+i-1);
}
*(ptr+index)=obj2;
}
<<<<<<< HEAD
int main()
{ printf("please enter the number of students you will store \n");
scanf("%d",&n);
struct student *ptr_student=(struct student* )calloc(n,sizeof(struct student));


>>>>>>> dynamicarray

    return 0;
=======
void print_array(struct student*ptr){
    for(int i=0;i<n;i++){
        printf("%d\n",(ptr+i)->id);
    }
}
int main(){
    int answer;
    int llsize;
    int interface=1;
    struct student st1;
    struct node* head1;
    while(interface){
        printf("Which code do you want to try? \n");
        printf("-------------------------------------------------------------\n");
        printf("1-Linked List\n");
        printf("2-Array\n");
        printf("3-Exit\n");
        scanf("%d",&answer);
        switch(answer){
        case 1:
            printf("Welcome to Linked Lists! \nPlease enter the number of nodes in the linked list \n");
            scanf("%d",&llsize);
            head1=createList(llsize);
            traverseList(head1);
            struct node* st0;
            struct node* st7;
            struct node* st8;
            st0=(struct node *)malloc(sizeof(struct node));
            st7=(struct node *)malloc(sizeof(struct node));
            st8=(struct node *)malloc(sizeof(struct node));
            head1=insert_at_head(st0,head1);
            traverseList(head1);
            insert_at_middle(st7,head1);
            traverseList(head1);
            insert_at_end(st8,head1);
            traverseList(head1);
            break;
        case 2:
            printf("Please enter the number of students you will store \n");
            scanf("%d",&n);
            struct student *ptr_student=(struct student* )calloc(n,sizeof(struct student));
            struct student s1;
            struct student s2;
            struct student s3;
            struct student s4;
            struct student s5;
            struct student s6;
            s1.id=100;
            s2.id=200;
            s3.id=300;
            s4.id=400;
            s5.id=500;
            s6.id=600;
            printf("-------------Insert at Begin-------------\n ");
            insert_begin(ptr_student,s3);
            insert_begin(ptr_student,s2);
            insert_begin(ptr_student,s1);
            print_array(ptr_student);
            printf("-------------Insert at Middle------------\n ");
            insert_middle(ptr_student,s6,2);
            insert_middle(ptr_student,s4,3);
            print_array(ptr_student);
            printf("-------------Insert  at   End-------------\n ");
            insert_end(ptr_student,s5);
            print_array(ptr_student);
            break;
        case 3:
            printf("exit");
            interface=0;
            break;
        }
    }
>>>>>>> dynamicarray
}
