#include<stdio.h>
void traverseArray(int a[],int size){
printf("Array: "); for(int i=0;i<size;i++){
printf("%d ",a[i]);
}

}

void insertionInArray(int a[],int size){ int pos,elm;
printf("\nEnter Postion for Insertion: ");
scanf("%d",&pos);
pos=pos-1;
printf("Enter Element for Insertion: ");
scanf("%d",&elm);
//shif element forward
for(int i=size-1;i>=pos;i--){
a[i]=a[i-1];
}
a[pos]=elm;
traverseArray(a,size);
}

void deletionInArray(int a[],int size){
int pos;
printf("\nEnter Position to Delete: ");
scanf("%d",&pos);
pos=pos-1;
for(int i=pos;i<size;i++){
a[i]=a[i+1];
}
a[size-1]=0;

traverseArray(a,size);

}
void reverseArray(int a[],int size){
for(int i=0;i<size/2;i++){
int temp=a[size-i-1];
a[size-i-1]=a[i];
a[i]=temp;
}
traverseArray(a,size);
}
int main(){

int arr[5]={10,20,30,40,465};
int size=sizeof(arr)/sizeof(arr[0]);
printf("\nTraversing"); traverseArray(arr,size);
printf("\nInsertion");
insertionInArray(arr,size);
printf("\nDeletion");
deletionInArray(arr,size);
printf("\nReverse");
reverseArray(arr,size);

return 0;
}
