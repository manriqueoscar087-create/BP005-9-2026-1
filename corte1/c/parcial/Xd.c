#include <stdio.h>
#include <stdbool.h>

int main() {
    
    printf("BIENVENIDO ESTUDIANTE\n\n");

    int codigo, edad;
    char nombre[50];
    char inicialApellido;
    float nota1, nota2, nota3, promedio;
    double matricula;
    bool matriculaActiva, documento, induccion, monitor;
    int temp;

    printf("Ingrese codigo del estudiante: ");
    scanf("%d", &codigo);

    printf("Ingrese nombre del estudiante: ");
    scanf("%s", nombre);

    printf("Ingrese inicial del apellido: ");
    scanf(" %c", &inicialApellido);

    printf("Ingrese edad: ");
    scanf("%d", &edad);

    printf("Ingrese nota 1: ");
    scanf("%f", &nota1);

    printf("Ingrese nota 2: ");
    scanf("%f", &nota2);

    printf("Ingrese nota 3: ");
    scanf("%f", &nota3);

    if(nota1 < 0 || nota1 > 5 || nota2 < 0 || nota2 > 5 || nota3 < 0 || nota3 > 5){
        printf("\nError: Las notas deben estar entre 0.0 y 5.0\n");
        return 0;
    }

    printf("Ingrese valor de matricula: ");
    scanf("%lf", &matricula);

    printf("Tiene matricula activa? (1=Si, 0=No): ");
    scanf("%d", &temp);
    matriculaActiva = temp;
  
    printf("Presento documento o carne? (1=Si, 0=No): ");
    scanf("%d", &temp);
    documento = temp;

    printf("Aprobo induccion de laboratorio? (1=Si, 0=No): ");
    scanf("%d", &temp);
    induccion = temp;

    printf("Es monitor de laboratorio? (1=Si, 0=No): ");
    scanf("%d", &temp);
    monitor = temp;

    promedio = (nota1 + nota2 + nota3) / 3;

    printf("\nEl codigo es: %s\n", (codigo % 2 == 0) ? "PAR" : "IMPAR");

    printf("Promedio: %.2f\n", promedio);

    if(promedio < 3.0){
        printf("Desempeno: Reprobado\n");
    } else if(promedio < 4.0){
        printf("Desempeno: Aceptable\n");
    } else if(promedio < 4.5){
        printf("Desempeno: Bueno\n");
    } else {
        printf("Desempeno: Excelente\n");
    }

    bool acceso = matriculaActiva && documento && (induccion || monitor);

    if(acceso){
        printf("Acceso al laboratorio: PERMITIDO\n");

        if(promedio >= 4.5){
            printf("Beneficio: Acceso prioritario\n");
        } else {
            printf("Beneficio: Acceso normal\n");
        }

    } else {
        printf("Acceso al laboratorio: DENEGADO\n");
    }

    printf("\n=== RESUMEN ===\n");
    printf("Codigo: %d\n", codigo);
    printf("Nombre: %s %c.\n", nombre, inicialApellido);
    printf("Edad: %d\n", edad);
    printf("Promedio: %.2f\n", promedio);
    printf("Matricula: %.2lf\n", matricula);

    return 0;
}
