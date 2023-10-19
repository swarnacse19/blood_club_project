int registerDonor(struct Donor *donors, int *donorCount) {
    FILE *file = fopen(USER_FILE, "a");
    if (!file) {
        displayError("Unable to open user file.");
        return -1;
    }

    struct Donor newDonor;
    printf("Enter username: ");
    scanf("%s", newDonor.username);
    printf("Enter password: ");
    scanf("%s", newDonor.password);
    printf("Enter full name (No whitespace): ");
    scanf("%s", newDonor.fullName);
    printf("Enter blood type (In Capital): ");
    scanf("%s", newDonor.bloodType);
    printf("Enter contact number: ");
    scanf("%s", newDonor.contactNumber);

    newDonor.donations = 0;
    newDonor.bloodTypeRegistered = 1; 
    // Indicates that the blood type is registered

    fprintf(file, "%s %s %s %s %s %d %d\n", newDonor.username, newDonor.password, newDonor.fullName, newDonor.bloodType, newDonor.contactNumber, newDonor.donations, newDonor.bloodTypeRegistered);
    fclose(file);

    donors[*donorCount] = newDonor;
    (*donorCount)++;

    printf("Registration successful!\n");
    return 0;
}