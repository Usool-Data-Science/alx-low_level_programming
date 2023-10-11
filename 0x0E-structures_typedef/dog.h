#ifndef DOG_H
#define DOG_H

/**
  * dog - A new alaise for struct dog
  */

typedef struct dog dog;

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

#endif /* DOC_H */
