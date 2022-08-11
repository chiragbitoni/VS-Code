#include<stdio.h>

int main(){

    // Question 1

    // FILE *ptr;
    // int n1,n2,n3;
    // ptr=fopen("Chirag.txt","r");
    // fscanf(ptr,"%d",&n1);
    // fscanf(ptr,"%d",&n2);
    // fscanf(ptr,"%d",&n3);
    // printf("%d, %d, %d", n1,n2,n3);

    // Question 2

    // int n,i;
    // printf("Enter the number = \n");
    // scanf("%d", &n);
    // FILE *ptr;
    // ptr = fopen("table.txt","w");
    // for(i=0;i<10;i++){  
    // fprintf(ptr,"%d X %d = %d\n",n,i+1,(i+1)*n);
    // }
    // fclose(ptr);
    // printf("Sucessfully Generated table.txt with %d's  table in it",n);

    // Question 3

    // FILE *ptr1,*ptr2;
    // ptr1 = fopen("Chirag.txt","r");
    // ptr2 = fopen("out.txt","w");
    // char c = fgetc(ptr1);
    // while(c!=EOF){
    //     fputc(c,ptr2);
    //     fputc(c,ptr2);
    //     c = fgetc(ptr1); 
    // }
    // fclose(ptr1);
    // fclose(ptr2);

    // Question 4

    // int i=0;
    // FILE *ptr;
    // ptr = fopen("employee.txt","w");
    // char name[10];
    // int sal;
    // for(int j=0;j<2;j++){
    //     printf("Enter name of employee %d = \n", j+1);
    //     scanf("%s",name);
    //     printf("Enter Salary of employee %d = \n",j+1);
    //     scanf("%d", &sal);
        
    //     fprintf(ptr,"%s, %d\n",name,sal);

    // }

    //  Question 5

    FILE *ptr1,*ptr2;
    int n;
    ptr1=fopen("Chirag.txt","r");
    ptr2=fopen("q5.txt","w");
    fscanf(ptr1,"%d", &n);
    fprintf(ptr2,"%d",n*2);
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}