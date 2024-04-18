#include<stdio.h>
#include<string.h>
/*//user defined
    struct student{
        char name[100];
        int roll;
        float cgpa;
    };
int main(){
    struct student s1;
    s1.roll=1987;
    s1.cgpa=9.6;
    //s1.name[100]="sahil"; (this will not print the name sahil thats why we have to use strcpy)
    strcpy(s1.name,"sahil");
    printf("student name = %s\n", s1.name);
    printf("student roll no= %d\n",s1.roll);
    printf("student cgpa= %f\n",s1.cgpa);

    struct student s2;
    s2.roll=1899;
    s2.cgpa=9.8;
    strcpy(s2.name,"raj");
    printf("student name = %s\n", s2.name);
    printf("student roll no= %d\n",s2.roll);
    printf("student cgpa= %f\n",s2.cgpa);

    struct student s3;
    s3.roll=1890;
    s3.cgpa=8.7;
    strcpy(s3.name, "jjk");
    printf("student name = %s\n", s3.name);
    printf("student roll no = %d\n", s3.roll);
    printf("student cgpa = %f\n", s3.cgpa);
    return 0;
}*/

//ARRAY OF STRUCTURES
/*struct student {
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student ece[100];
    ece[0].roll=1879;
    ece[0].cgpa=9.0;
    strcpy(ece[0].name,"sahil");
    printf("student name is = %s\n",ece[0].name);
    printf("student roll no = %d\n",ece[0].roll);
    return 0;
}*/

//INITIALIZING STRUCTURES
/*struct student {
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1={"sahil",1232,8.0};
    printf("student roll = %d\n",s1.roll);
    return 0;
}*/

//POINTERS TO STRUCTURES
/*struct student {
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1={"sahil",1232,8.0};
    printf("student roll = %d\n",s1.roll);
    struct student *ptr;
    ptr=&s1;
    
    printf("student roll = %d\n",(*ptr).roll);
    return 0;
}*/ 

//ARROW OPERATOR
/*struct student {
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1={"sahil",1232,8.0};
    printf("student roll = %d\n",s1.roll);
    struct student *ptr;
    ptr=&s1;
    
    printf("student roll = %d\n",ptr->roll);
    return 0;
}*/

//PASSING STRUCTURES TO FUNCTION
/*struct student{
    char name[100];
    int roll;
    float cgpa;
};
void printInfo(struct student s1);

int main(){
    struct student s1={"sahil",1232,8.0};
    printInfo(s1);
    return 0;
}

void printInfo(struct student s1){
    printf("student roll = %d\n",s1.roll);
}
*/

//TYPEDEF KEYWORD
/*typedef struct student {
    char name[100];
    int roll;
    float cgpa;
}st;//we created an alias for struct student as st
int main(){
    st s1={"sahil",1232,8.0};
    printf("student roll = %d\n",s1.roll);
    return 0;
}*/

//QS1 
struct address{
    int house_no ;
    int block;
    char city[100];
    char state[100];
};
void printadd(struct address s1[]);
int main(){
    struct address s1[5];
    //s1[0]={23,5,"dehradun","uttarakhand"};//cant input values in thsi format in array
    s1[0].house_no=23;
    s1[0].block=5;
    strcpy(s1[0].city,"dehradun");
    strcpy(s1[0].state,"uttarakhand");
    

    s1[1].house_no=53;
    s1[1].block=4;
    strcpy(s1[1].city,"dehradun");
    strcpy(s1[1].state,"uttarakhand");
    

    s1[2].house_no=43;
    s1[2].block=7;
    strcpy(s1[2].city,"dehradun");
    strcpy(s1[2].state,"uttarakhand");
    
    s1[3].house_no=93;
    s1[3].block=8;
    strcpy(s1[3].city,"dehradun");
    strcpy(s1[3].state,"uttarakhand");
    
    printadd(s1);
    return 0;
}
void printadd(struct address s1[]){
    printf("house no. = %d\n",s1[0].house_no);
    printf("block= %d\n",s1[0].block);
    printf("city = %s\n",s1[0].city);
    printf("state = %s\n",s1[0].state);
    printf("\n");

    printf("house no. = %d\n",s1[1].house_no);
    printf("block= %d\n",s1[1].block);
    printf("city = %s\n",s1[1].city);
    printf("state = %s\n",s1[1].state);
    printf("\n");

    printf("house no. = %d\n",s1[2].house_no);
    printf("block= %d\n",s1[2].block);
    printf("city = %s\n",s1[2].city);
    printf("state = %s\n",s1[2].state);
    printf("\n");

    printf("house no. = %d\n",s1[3].house_no);
    printf("block= %d\n",s1[3].block);
    printf("city = %s\n",s1[3].city);
    printf("state = %s\n",s1[3].state);
    printf("\n");
}
