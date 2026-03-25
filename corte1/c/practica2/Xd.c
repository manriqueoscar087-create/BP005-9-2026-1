#include <stdio.h>
#include <stdbool.h>

int main() {
    
    // Mensaje de bienvenida
    printf("=== SISTEMA DE ANALISIS ACADEMICO ===\n\n");

    // Variables
    int codigo, edad;
    char nombre[50];
    char inicialApellido;
    float nota1, nota2, nota3, promedio;
    double matricula;
    bool matriculaActiva, documento, induccion, monitor;

    // Entrada de datos
    printf("Ingrese codigo del estudiante: ");
    scanf("%d", &codigo);

    printf("Ingrese nombre del estudiante: ");
    scanf("%s", nombre);

    printf("Ingrese inicial del apellido: ");
    scanf(" %c", &inicialApellido);

    printf("Ingrese edad: ");
    scanf("%d", &edad);

    // Notas con validación
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
    scanf("%d", &matriculaActiva);

    printf("Presento documento? (1=Si, 0=No): ");
    scanf("%d", &documento);

    printf("Aprobo induccion? (1=Si, 0=No): ");
    scanf("%d", &induccion);

    printf("Es monitor? (1=Si, 0=No): ");
    scanf("%d", &monitor);

    // Promedio
    promedio = (nota1 + nota2 + nota3) / 3;

    // Par o impar (operador ternario)
    printf("\nEl codigo es: %s\n", (codigo % 2 == 0) ? "PAR" : "IMPAR");

    // Clasificación
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

    // Acceso al laboratorio (condición lógica)
    bool acceso = matriculaActiva && documento && (induccion || monitor);

    if(acceso){
        printf("Acceso al laboratorio: PERMITIDO\n");

        // Condicional anidado
        if(promedio >= 4.5){
            printf("Beneficio: Acceso prioritario\n");
        } else {
            printf("Beneficio: Acceso normal\n");
        }

    } else {
        printf("Acceso al laboratorio: DENEGADO\n");
    }

    // Resumen final
    printf("\n=== RESUMEN ===\n");
    printf("Codigo: %d\n", codigo);
    printf("Nombre: %s %c.\n", nombre, inicialApellido);
    printf("Edad: %d\n", edad);
    printf("Promedio: %.2f\n", promedio);
    printf("Matricula: %.2lf\n", matricula);

    return 0;
}
