#include<stdio.h>
#include<stdint.h>
#include<string.h>
int n;
typedef struct 
{
    char name[32];
    int mssv[7];
    uint8_t course_c;
}infor_t ;

void infor_input(infor_t *stu_infor);
void infor_print(infor_t *stu_infor);


int main()
{
    infor_t sv1, *stu_infor;
    stu_infor  = &sv1;  
    infor_input(&sv1);
    infor_print(stu_infor);

    return 0;
}

void infor_input(infor_t *stu_infor)
{   
    printf("What's your name ? : ");
    scanf("%s", &stu_infor->name);
    
    printf("Type the id student: ");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &stu_infor->mssv[i]);
    }
       
    printf("Which course do you participate ? : ");
    scanf("%d", &stu_infor->course_c);
}

void infor_print(infor_t *stu_infor)
{
    printf("Name: %s\n", stu_infor->name);

    printf("The id is: ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d", stu_infor->mssv[i]);
    }    

    printf("\nYou participate C%d course",stu_infor->course_c);  
}


