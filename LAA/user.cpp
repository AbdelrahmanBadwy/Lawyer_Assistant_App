#include "user.h"

// Constructors
user::user() {
    // Initialize member variables if needed
    //setType("supervisor");

}
user::user(int newId, const QString& newName, const QString& newPassword,
     const QString& newJobTitle, const QString& newType,
     const QString& newEmail, int newSupId)
    : id(newId), name(newName), password(newPassword),
    job_title(newJobTitle), type(newType),
    email(newEmail), sup_id(newSupId) {
    // Additional initialization code, if needed
}
user::~user() {
    // Clean up resources if needed
    // ...

    // Delete todos in the list
    todos.clear();

    // Reset the static instance
    instance = nullptr;
}
// Initialize the static member
user* user::instance = nullptr;

// Function to get the instance of the singleton class
user* user::getInstance() {
    // Create the instance if it doesn't exist yet
    if (instance == nullptr) {
        instance = new user();
    }
    return instance;
}

// Setters
void user::setId(int newId) {
    id = newId;
}

void user::setName(const QString& newName) {
    name = newName;
}

void user::setPassword(const QString& newPassword) {
    password = newPassword;
}

void user::setJobTitle(const QString& newJobTitle) {
    job_title = newJobTitle;
}

void user::setType(const QString& newType) {
    type = newType;
}

void user::setEmail(const QString& newEmail) {
    email = newEmail;
}

void user::setSupervisorId(int newSupId) {
    sup_id = newSupId;
}
void user::setToDos(const QList<toDo*>& newToDos) {
    todos = newToDos;
}
void user::setJuniors(const QList<user*>& newJuniors) {
    juniors = newJuniors;
}

// Getters
int user::getId() const {
    return id;
}

const QString& user::getName() const {
    return name;
}

const QString& user::getPassword() const {
    return password;
}

const QString& user::getJobTitle() const {
    return job_title;
}

const QString& user::getType() const {
    return type;
}

const QString& user::getEmail() const {
    return email;
}

int user::getSupervisorId() const {
    return sup_id;
}

// Function implementation of todos QList
const QList<toDo*>& user::getToDos() const {
    return todos;
}

const QList<user*>& user::getJuniors() const {
    return juniors;
}

void user::appendToDo(toDo* newToDo) {
    todos.append(newToDo);
}
