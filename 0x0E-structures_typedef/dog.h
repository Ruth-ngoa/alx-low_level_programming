#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct dog
 * @name: name
 * @age: age
 * @owner: owner
 * description:this stucture is for dog
 */
struct dog
{
	char*name;
	float age;
	char*owner;
}
typed struct dog dog_t;
void init_dog(struct dog*d, char*name, float age, char*owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t*d);

#endif /*DOG_H*/
