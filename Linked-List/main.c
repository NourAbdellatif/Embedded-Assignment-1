#include <stdio.h>
#include <stdlib.h>
struct student {
char name[100];
int id;
int date[3];
int ly_result;
};
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
  if(*(ptr+i)==0){
    insertion_index=i;

  }

}
*(ptr+insertion_index)=obj1;
}
void insert_middle(struct student *ptr,struct student obj2){
if(n%2==0){
    mid_index=(n/2)-1;
}
else{

    mid_index=n/2;

}
}
int n;
int main()
{
scanf("%d",&n);
struct student *ptr_student=(struct student* )calloc(n,sizeof(struct student));



    return 0;
}
