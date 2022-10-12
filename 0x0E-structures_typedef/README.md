<h1> This task was carried out by Adeoba Emmanuel Tosin</h1>

<h1>0x0E. C - Structures, typedef</h1>

<h2>Tasks</h2>

<h3>0.Poppy</h3>
Define a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *

<h3>1. A dog is the only thing on earth that loves you more than you love yourself</h3>
Write a function that initialize a variable of type struct dog

Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

<h3>2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad</h3>
Write a function that prints a struct dog

Prototype: void print_dog(struct dog *d);
Format: see example bellow
You are allowed to use the standard library
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.

<h3>3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read</h3>
Define a new type dog_t as a new name for the type struct dog.

<h3>4. A door is what a dog is perpetually on the wrong side of</h3>
Write a function that creates a new dog.

Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails

<h3>5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg </h3>
Write a function that frees dogs.

Prototype: void free_dog(dog_t *d);

<h2>This task was carried out by Adeoba Emmanuel Tosin </h2>
