#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define length 25

typedef struct{
    int matricula;
    char nome[length];
    char turma;
}Aluno;

int main()
{
 Aluno aluno;
 
    printf("Enter with student name: ");
        fgets(aluno.nome, length, stdin);
        //getchar();
    printf("Put the student code: ");
        scanf("%d", &aluno.matricula);
        getchar();
    printf("What's the student class? ");
        scanf("%c", &aluno.turma);
        char turm = toupper(aluno.turma);
 
    printf("Student tags: \n");
    printf(" name: %s code: %d\n class: %c\n", aluno.nome, aluno.matricula, turm);

    return 0;
}
