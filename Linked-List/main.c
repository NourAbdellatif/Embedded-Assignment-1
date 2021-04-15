#include <stdio.h>
#include <stdlib.h>
struct student {
char name[100];
int id;
int date[3];
int ly_result;
};
int n;
void insert_begin(struct student* ptr, struct student obj1){
int i;
for(i=n-1;i>0;i--){
*(ptr+i)=*(ptr+i-1);
}
*ptr=obj1;
}
void insert_end(struct student* ptr, struct student obj1){
int insertion_index;
for(int i=0;i<n;i++){

  if((ptr+i)->id==0){
    insertion_index=i;

  }

}
*(ptr+insertion_index)=obj1;
}
void insert_middle(struct student *ptr,struct student obj2){
int mid_index=(n-1)/2;
int i;
for(i=n-1;i>mid_index;i--){
    *(ptr+i)=*(ptr+i-1);
}
*(ptr+mid_index)=obj2;
}
int main()
{ printf("please enter the number of students you will store \n");
scanf("%d",&n);
struct student *ptr_student=(struct student* )calloc(n,sizeof(struct student));
struct student s1;
insert_begin(ptr_student,s1);


    return 0;
}
