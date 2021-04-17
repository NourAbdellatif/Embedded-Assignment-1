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
int main()
{ printf("please enter the number of students you will store \n");
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
insert_middle(ptr_student,s6,2);
insert_middle(ptr_student,s4,3);
insert_end(ptr_student,s5);
insert_begin(ptr_student,s4);
insert_begin(ptr_student,s3);
insert_begin(ptr_student,s2);
insert_begin(ptr_student,s1);
//insert_end(ptr_student,s5);


for(int i=0;i<n;i++){

    printf("%d\n",(ptr_student+i)->id);

}

    return 0;
}
