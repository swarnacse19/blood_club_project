#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE 50
#define USER_FILE "users.txt"

struct Donor {
    char username[MAX_SIZE];
    char password[MAX_SIZE];
    char fullName[MAX_SIZE];
    char bloodType[MAX_SIZE];
    char contactNumber[MAX_SIZE];
    int donations;
    int bloodTypeRegistered;
};