#include <iostream>
#include <random>

#define NUMBER_USERS 1
#define NAME_LENGTH 25

enum Gender {
	MALE,
	FEMALE,
	OTHER
};

struct User {
	int id;
	char lastname[NAME_LENGTH];
	char name[NAME_LENGTH];
	int weigth;
	Gender gender;
};

User users[NUMBER_USERS];

void printUsers(int i);

int main() {
	for (int i = 0; 1 < NUMBER_USERS; i++) {
		users[i].id = i;

	}
	

}

void printUsers(int i) {

}