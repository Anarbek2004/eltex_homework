#include <stdio.h>
#include <stdint.h>
#include <stdalign.h>

typedef struct {
    char* Name;
    char* Surname;
    uint8_t Age;
    float GPA;
    char Gender;
} Person;

typedef struct {
    char* Name;
    char* Surname;
    uint8_t Age: 6;
    uint8_t Gender: 2; // 2 бита для пола (достаточно для M/F/Other)
    float GPA;
} CompressedPerson;


int main() {
    Person person;
    CompressedPerson compressedPerson;

    printf("Размер Person: %lu\n", sizeof(person));
    printf("Выравнивание Person: %lu\n", alignof(person));

    printf("Размер CompressedPerson: %lu\n", sizeof(compressedPerson));
    printf("Выравнивание CompressedPerson: %lu\n", alignof(compressedPerson));

    return 0;
}