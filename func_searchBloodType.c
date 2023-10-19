int searchBloodType(const struct Donor *donors, int donorCount) {
    char bloodType[MAX_SIZE];

    printf("Enter Blood Type (In Capital): ");
    scanf("%s", bloodType);

    for (int i = 0; i < donorCount; i++) {
        if (strcmp(bloodType, donors[i].bloodType) == 0 && donors[i].bloodTypeRegistered == 1) {
            printf("Blood Group available!\n");
            printf("Name of donor is %s\n",donors[i].fullName);
            printf("The number is %s",donors[i].contactNumber);
            return i; 
            // Return the index of the found donor
        }
    }

    displayError("Sorry, Blood Group not available!");
    return -1; 
    // Blood group not found
}
