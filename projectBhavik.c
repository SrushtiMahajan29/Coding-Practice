#include <stdio.h>
#include <string.h>


struct Patient {
    char name[50];
    int age;
    char gender[10];
    char medication[100];
};

int main() {
    struct Patient patient;
    int choice,opt=1;
do{
    printf("\nMedical Management System\n");
    printf("1. Add Patient\n");
    printf("2. View Patient details\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            // Input patient details
            printf("\nEnter patient name: ");
            scanf("%s", patient.name);
            printf("\nEnter patient age: ");
            scanf("%d", &patient.age);
            printf("\nEnter patient gender: ");
            scanf("%s", patient.gender);
            int symptome;
            printf("\nEnter patient symptoms:  ");
            printf("1 for fever\n2 for cough\n3 for sneezing\n4 for headache\n5 for body-pain\nchoose your symptoms: ");
            scanf("%d",&symptome);
            
            switch(symptome)
            {
                case 1:strcpy(patient.medication,"Fever medicine");
                    break;
                case 2:strcpy(patient.medication,"Fever medicine");
                    break;
                case 3:strcpy(patient.medication,"Fever medicine");
                    break;
                case 4:strcpy(patient.medication,"Fever medicine");
                    break;
                case 5:strcpy(patient.medication,"Fever medicine");
                    break;
                default: strcpy(patient.medication,"Unknown Symptoms : Go to specialist\n");
            }
            printf("Thank you");
            break;
        case 2:
            // Display patient details
            printf("\nPatient Details:\n");
            printf("Name: %s\n", patient.name);
            printf("Age: %d\n", patient.age);
            printf("Gender: %s\n", patient.gender);
            printf("Medication: %s\n", patient.medication);
            break;
        default: printf("Invalid choice!\n");
    }

    printf("Do you want to continue? \n");
    scanf("%d",&opt);

}while(opt==1);

    return 0;
}