# 🧾 Problem Statement: Grade Tracker

You are tasked with designing and implementing a **Grade Tracker system** in **C++98** that manages student grades stored in a text file.  

Your program must be capable of reading grade data from an input file, storing it dynamically in memory, and providing an interactive menu that allows the user to view and modify grades. The program must be implemented using classes and **manual dynamic memory management** — the use of standard template library containers (such as `std::vector` or `std::list`) is not permitted.

---

## 📂 Requirements

### 1. File Input
- The program should read from a file named `grades.txt`.  
- Each line contains a student's name (a single word) and their integer grade (0–100).  
- Example:

---

### 2. Data Storage
- Student data must be stored in a dynamically allocated array of objects or pointers.  
- The number of students is not known in advance, so your design should handle variable input sizes.

---

### 3. Class Design
You must implement at least **two classes**:

#### `Student`
Represents a student’s name and grade.

**Attributes**
- `std::string name`
- `int grade`

**Methods**
- Constructor: `Student(const std::string& name, int grade)`
- Getters and setters for name and grade
- `void print() const` to display a student’s information

#### `GradeBook`
Manages all student records.

**Attributes**
- `Student** students` (a dynamically allocated array of pointers)
- `int numStudents`

**Methods**
- `GradeBook()` and `~GradeBook()`
- `void loadFromFile(const std::string& filename)`
- `void printAll() const`
- `void increaseGrade(const std::string& name, int amount)`
- `void decreaseGrade(const std::string& name, int amount)`

#### `PrintMenu`

**Methods**
- `void displayMenu()`

All dynamic memory must be properly deallocated in the destructor.

---

### 4. Menu Interaction
After loading data from the file, display a text-based menu that allows the user to:

1. Print all grades  
2. Increase a student’s grade  
3. Decrease a student’s grade  
4. Exit the program  

When modifying grades:
- Ask the user for the student’s name and the amount to change the grade by.
- Ensure grades remain between **0** and **100**.

**Example Menu:**