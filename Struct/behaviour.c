#include <stdio.h>

// Struct definition
typedef struct Student {
	int roll;
	char name[20];
	double phy, chem, maths;	
} Student;

// prototype declaration
void inputStuden(Student *);
double getAverageScore(Student);
char getStudentGrade(Student);
void printStudent(Student);

// behaviour definition
void inputStudent(Student *sp) {
	// input requires address
	printf("\nEnter name of student: ");
	scanf(" %[^\n]", sp->name);	// name is itself an address

	printf("Enter roll of student: ");
	scanf(" %d", &sp->roll);

	do {
		int i = 0;
		if (i > 0) {
			printf("Invalid entry, please try again..\n");
		}		
		printf("Enter score in Physics (0.0 - 100.0): ");
		scanf(" %lf", &sp->phy);
		i++;
	} while (sp->phy < 0.0 || sp->phy > 100.0);

	do {
		int i = 0;
		if (i > 0) {
			printf("Invalid entry, please try again..\n");
		}
		printf("Enter score in Chemistry (0.0 - 100.0): ");
		scanf(" %lf", &sp->chem);
		i++;
	} while (sp->chem < 0.0 || sp->chem > 100.0);
	
	do {
		int i = 0;
		if (i > 0) {
			printf("Invalid entry, please try again..\n");
		}
		printf("Enter score in Maths (0.0 - 100.0): ");
		scanf(" %lf", &sp->maths);
		i++;
	} while (sp->maths < 0.0 || sp->maths > 100.0);
}

double getAverageScore(Student s) {
	double sum = s.phy + s.chem + s.maths;
	return (sum/3.0);
}

char getStudentGrade(Student s) {
	char grade;
	double avg = getAverageScore(s);

	if (avg > 90)
		grade = 'A';
	else if (avg >= 80 && avg < 90)
		grade = 'B';
	else if (avg >= 70 && avg < 80)
		grade = 'C';
	else if (avg >= 60 && avg < 70)
		grade = 'D';
	else if (avg >= 50 && avg < 60)
		grade = 'E';
	else
		grade = 'F';

	return grade;
}

void printStudent(Student s) {
	printf("\n");
	printf("------------ Student Details ------------\n");
	printf("-----------------------------------------\n");
	printf("Name: 		%-20s\n", s.name);
	printf("Roll: 		%-4d\n", s.roll);
	printf("Physics: 	%-6lf\n", s.phy);
	printf("Chemistry: 	%-6lf\n", s.chem);
	printf("Maths: 		%-6lf\n", s.maths);
	printf("Grade: 		%-4c\n", getStudentGrade(s));
	printf("-----------------------------------------\n");
}

int main() {
	int num = 0;
	printf("Enter number of students: ");
	scanf("%d", &num);
	Student s[num];

	for (int i = 0; i < num; i++) {
		inputStudent(&s[i]);
	}
	
	for (int i = 0; i < num; i++) {
		printStudent(s[i]);
	}
	
	return 0;
}