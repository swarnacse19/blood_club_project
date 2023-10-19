void changePassword(struct Donor *donors, int userIndex) {
    if (userIndex >= 0) {
        printf("Enter new password: ");
        scanf("%s", donors[userIndex].password);
        printf("Password changed successfully!\n");
    } else {
        displayError("Invalid user index.");
    }
}

void changeNumber(struct Donor *donors, int userIndex) {
    if (userIndex >= 0) {
        printf("Enter new contact number: ");
        scanf("%s", donors[userIndex].contactNumber);
        printf("Contact number changed successfully!\n");
    } else {
        displayError("Invalid user index.");
    }
}