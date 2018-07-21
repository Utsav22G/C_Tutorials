#include <stdio.h>
#include <string.h>

// struct definition
struct Student {
	int roll;
	char name[20];
	double gpa;
};

typedef struct Student Student; 	// Student is alias for struct Student

/*	Combining typedef and struct:

typedef struct Student {
	int roll;
	char name[20];
	double gpa;	
} Student;

Will create an alias Student for struct Student		*/

int main() {
	struct Student s1, s2;
	Student s3;		// using typedef here
	Student *sp;	// pointer to struct Student

	strcpy(s1.name, "Shawn");	// s1.name = "Shawn" doesn't work as arrays are not assignable
	strcpy(s2.name, "Nathan");

	s1.gpa = 3.2;
	s2.gpa = 3.75;

	s1.roll = 3;
	s2.roll = 2;

	sp = &s3;	// assigning the address of s3 to sp
	strcpy(sp->name, "Erika");
	sp->gpa = 3.58;
	sp->roll = 3;

	return 0;
}