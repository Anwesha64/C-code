struct Department {
    char name[50];
    char location[50];
    char supervisor[50];
};

struct Employee {
    char name[50];
    int age;
    struct Department dept;
};

int main() {
    struct Employee emp;
    strcpy(emp.name, "John Doe");
    stcpy(emp.age,"30");
    strcpy(emp.dept.name, "IT Department");
    strcpy(emp.dept.location, "New York");
    strcpy(emp.dept.supervisor, "Jane Smith");

    // Accessing nested structure members
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Age: %d\n", emp.age);
    printf("Department Name: %s\n", emp.dept.name);
    printf("Department Location: %s\n", emp.dept.location);
    printf("Department Supervisor: %s\n", emp.dept.supervisor);

    return 0;
}
