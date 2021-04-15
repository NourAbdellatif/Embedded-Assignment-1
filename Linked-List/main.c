#include <stdio.h>
#include <stdlib.h>
struct student {
char name[100];
int id;
int date[3];
int ly_result;
};
int n;
int end=-1;
void insert_begin(struct student* ptr, struct student obj1){   // function to insert at the beginning of the array
/*if(end+1==n){
struct student*ptr=(struct student*)realloc(struct student*ptr,2*n);
n=2*n;
}*/
int i;
for(i=n-1;i>0;i--){
*(ptr+i)=*(ptr+i-1);
}
*ptr=obj1;
}
void insert_end(struct student* ptr, struct student obj1){ // function to append at the end of the array
/*if(end+1==n){
        n=2*n;
struct student*ptr=(struct student*)realloc(struct student*ptr,2*n);
}*/
end++;
*(ptr+end)=obj1;
}
void insert_middle(struct student *ptr,struct student obj2, int index){ // function to insert at any index of the array
/*if(end+1==n){
struct student*ptr=(struct student*)realloc(struct student*ptr,2*n);
n=2*n;
}*/
end++;
int i;
for(i=n-1;i>index;i--){
    *(ptr+i)=*(ptr+i-1);
}
*(ptr+index)=obj2;
}
int main()
{ printf("please enter the number of students you will store \n");
scanf("%d",&n);
struct student *ptr_student=(struct student* )calloc(n,sizeof(struct student));
struct student s1;
insert_begin(ptr_student,s1);


    return 0;
}
