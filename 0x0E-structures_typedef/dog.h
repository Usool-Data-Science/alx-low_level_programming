#ifndef DOG_H
#define DOG_H

/**
  * struct dog - A new data type dog
  * @name: Name of the dog
  * @age: Age of the dog
  * @owner: Name of the dog's owner
  *
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
  * dog_t - a new alias for struct dog
  */

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOC_H */
