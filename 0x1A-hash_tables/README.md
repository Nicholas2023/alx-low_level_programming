# Hash Tables :smile:

This repository contains the implementation of a hash table data structure in C. The hash table is implemented using a chaining collision mechanism, where each cell in the hash table array points to the head of a linked list of hash nodes.

## Data Structures

The hash table implementation consists of the following data structure:

`hash_node_t`

* `key`: The key, represented as a string. The key is unique in the hash table
* `value`: The value corresponding to the key, represented as a string.
* `next`: A pointer to the next node in the linked list.

`hash_table_t`

* `size`: The size of the hash table array.
* `array`: An array of size `size`. Each cell of this array is a pointer to the first node of a linked list.

## Functions

The repository includes the following functions:

`hash_table_t *hash_table_create(unsigned long int size)`

Creates a new hash table with the specified size.

* `size`: The size of the hash table array.

Returns a pointer to the newly created hash table. If an error occurs, the function returns `NULL`

`unsigned long int hash_djb2(const unsigned char *str)`

Implements the djb2 algorithm, a hash function for strings.

* `str`: The input string.

Returns the hash value as an unsigned long int

`unsigned long int key_index(const unsigned char *key, unsigned long int size)`

Calculates the index of a key in the hash table array.

* `key`: The key.
* `size`: The size of the hash table array

Returns the index at which the key/value pair should be stored in the array.

`int hash_table_set(hash_table_t *ht, const char *key, const char *value)`

Adds or updates an element in the hash table

* `ht`: The hash table
* `key`: The key. Cannot be an empty string
* `value`: The value associated with the key. It must be duplicated. It can be an empty string

Returns 1 if the operation succeeds, or 0 otherwise

`char *hash_table_get(const hash_table_t *ht, const char *key)`

Retrieves the value associated with a key from the hash table

* `ht`: The hash table
* `key`: The key

Returns the value associated with the key, or `NULL` if the key couldn't be found

`void hash_table_print(const hash_table_t *ht)`

Prints the contents of the hash table

* `ht`: The hash table

The function prints the key/value pairs in the order they appear in the hash table, following the format:

```
{'key1': 'value1', 'key2': 'value2', ...}
```

If the hash table is `NULL`, nothing is printed

## Usage

To use the hash table implementation, follow these steps:

1. Clone the repository:
```
git clone https://github.com/your_username/hash-tables.git
```

2. Include the `"hash_table.h"` header file in your C program:

```c
#include "hash_tables.h"
```

3. Compile your program with the hash table implementation:

```bash
gcc -Wall -Wextra -pedantic -std=c11 your_program.c hash_tables.c -o your_program
```

4. Run your program

```bash
./your_program
```

## Example

Here's an example of how to use the hash table implementation:

```c
#include <stdlib.h>
#include <stdio.h>
#include "hash_table.h"

int main(void)
{
	hash_table_t *ht;
	char *value;

	ht = hash_table_create(10);
	if (ht == NULL)
	{
		fprintf(stderr, "Failed to create hash table\n");
		return EXIT_FAILURE;
	}

	if (!hash_table_set(ht, "key1", "value1"))
	{
		fprintf(stderr, "Failed to set key1\n");
		return EXIT_FAILURE;
	}

	value = hash_table_get(ht, "key1");
	if (value == NULL)
	{
		fprintf(stderr, "Failed to get value for key1\n");
		return EXIT_FAILURE;
	}
	printf("Value for key1: %s\n", value);

	hash_table_print(ht);

	return EXIT_SUCCESS;
}
```

## Contributing

Pull request are welcome. For major changes, please open an issue first to discuss what you would like to change

## License

This project is licensed under the MIT LIcense.
