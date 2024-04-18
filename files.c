#include<stdio.h>
/*int main(){
    FILE *fptr;
    fptr=fopen("test.txt","r");//to open a file
    fclose(fptr);//to close a file
    return 0;
}*/

//check if file exists or not
/*int main(){
    FILE *fptr;
    fptr=fopen("newtest.txt","r");
    if(fptr==NULL){
        printf("file doesnt exist");
    }
    else{
        fclose(fptr);
    }
    return 0;
}*/

//write creates a new file if it doesnt exist
/*int main(){
    FILE *fptr;
    fptr=fopen("newtest.txt","w");
    if(fptr==NULL){
        printf("file doesnt exist");
    }
    else{
        fclose(fptr);
    }
    return 0;
}*/

//reading from a file
/*int main(){
    FILE *fptr;
    fptr= fopen("newtest.txt", "r");
    int ch;
    for(int i=0;i<5;i++){
    fscanf(fptr,"%d",&ch);
    printf("character = %d\n", ch);
    }
    fclose(fptr);
    return 0;
}*/

//writing to a file
/*int main(){
    FILE *fptr;
    fptr= fopen("newtest.txt", "w");
    fprintf(fptr,"%c",'m');
    fclose(fptr);
    return 0;
}*/ 

//appending in a file
/*int main(){
    FILE *fptr;
    fptr= fopen("newtest.txt", "a");
    fprintf(fptr,"%c",'m');
    fclose(fptr);
    return 0;
}*/

//read using fgetc(only for char)
/*int main(){
    FILE *fptr;
    fptr= fopen("newtest.txt", "r");
    char ch=fgetc(fptr);
    printf("character = %c\n", ch);
    fclose(fptr);
    return 0;
}*/

//write using fputc(only for char)
/*int main(){
    FILE *fptr;
    fptr= fopen("newtest.txt", "w");
    
    fputc('m',fptr);
    
    fclose(fptr);
    return 0;
}*/

//read till EOF
/*int main(){
    FILE *fptr;
    fptr= fopen("newtest.txt", "r");
    char ch;
    while((fscanf(fptr,"%c",&ch))!=EOF){
    printf("%c", ch);
    }
    fclose(fptr);
    return 0;
}*/

//print no. in the text file
/*int main(){
    FILE *fptr;
    fptr=fopen("newtest.txt","r");
    int ch;
    for(int i=0;i<5;i++){
        fscanf(fptr,"%d",&ch);
        printf("%d",ch);
    }
    fclose(fptr);
    return 0;
}*/

//enter the student info in a text file
/*int main(){
    FILE *fptr;
    fptr=fopen("newtest.txt","w");

    char name[100];
    int age;
    float cgpa;

    scanf("%s",name);
    scanf("%d",&age);
    scanf("%f",&cgpa);

    fprintf(fptr,"%s\n", name);
    fprintf(fptr,"%d\n", age);
    fprintf(fptr,"%f\n", cgpa);

    fclose(fptr);

    return 0;

}*/

//if a and b are stored in text file then write their sum in text file
int main(){
    FILE *fptr;
    fptr=fopen("newtest.txt","r");

    int a,b;
    fscanf(fptr,"%d",&a);
    fscanf(fptr,"%d",&b);
    fclose(fptr);

    fptr=fopen("newtest.txt","w");

    int c=a+b;
    fprintf(fptr,"%d", c);
    fclose(fptr);
    return 0;

}
