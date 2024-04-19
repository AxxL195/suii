#include<stdio.h>
#include<stdlib.h>
/*int main(){
    int *ptr;
    ptr=(int *)malloc(5 *sizeof(int));//memory allocation
    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    ptr[3]=4;
    ptr[4]=5;
    for(int i=0;i<5;i++){
        printf("%d\n",ptr[i]);
    }
    return 0;
}*/

//print the prices
/*int main(){
    float *ptr;
    ptr=(float *)malloc(5 *sizeof(float));//memory allocation
    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    ptr[3]=4;
    ptr[4]=5;
    for(int i=0;i<5;i++){
        scanf("%f",&ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%f\n",ptr[i]);
    }
    return 0;
}*/


/*int main(){
    float *ptr;
    ptr=(float *)calloc(5, sizeof(float));//continuous allocation
    
    for(int i=0;i<5;i++){
        scanf("%f",&ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%f\n",ptr[i]);
    }
    return 0;
}*/

/*int main(){
    float *ptr;
    ptr=(float *)calloc(5, sizeof(float));//continuous allocation
    
    for(int i=0;i<5;i++){
        scanf("%f",&ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%f\n",ptr[i]);
    }

    free(ptr);//free memory
    ptr=(float *)calloc(2, sizeof(float));
    for(int i=0;i<2;i++){
        printf("%f\n",ptr[i]);
    }

    return 0;
}*/

int main(){
    int *ptr;
    ptr=(int *)calloc(5, sizeof(int));//continuous allocation
    
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    
    printf("n");
    ptr = realloc(ptr, 8  *sizeof(int));//re allocation
    for(int i=0;i<8;i++){
        scanf("%d",&ptr[i]);
    }
    printf("number are :");
    for(int i=0;i<8;i++){
        printf("%d\n",ptr[i]);
    }
    free(ptr);
    return 0;
}
