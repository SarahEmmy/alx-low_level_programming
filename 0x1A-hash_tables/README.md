<<<<<<< HEAD
# 0x1A-hash_tables

## Description

This repository contains the implementation of hash tables. A hash table is a data structure that allows for efficient storage and retrieval of key-value pairs. The purpose of this project is to provide a working implementation of hash tables in [programming language].

## Getting Started

To get started with this project, follow the steps below:

1. Clone the repository to your local machine.
2. Navigate to the project directory.
3. [Add any additional steps if necessary.]

## Usage

To use the hash tables implemented in this project, [provide instructions and examples on how to use the code]. This may include code snippets, function calls, or command-line examples.

## Contributing

Contributions to this project are welcome. To contribute, please follow the guidelines below:

1. Fork the repository on GitHub.
2. Create a new branch for your feature or bug fix.
3. Make your changes and test them thoroughly.
4. Commit your changes and push them to your forked repository.
5. Submit a pull request.
=======
# Project 0x1A. C - Hash tables

## Learning Objectives

At the end of this project, you should be able to explain the following concepts without the help of Google:

### General

- What is a hash function
- What makes a good hash function
- What is a hash table, how do they work, and how to use them
- What is a collision and what are the main ways of dealing with collisions in the context of a hash table
- What are the advantages and drawbacks of using hash tables
- What are the most common use cases of hash tables

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall`, `-Werror`, `-Wextra`, and `-pedantic`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- You are allowed to use the C standard library
- The prototypes of all your functions should be included in your header file called `hash_tables.h`
- Don't forget to push your header file
- All your header files should be include guarded

## More Info

### Data Structures

Please use the following data structures for this project:

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;
```

### Tests

We strongly encourage you to work all together on a set of tests.

### Python Dictionaries

Python dictionaries are implemented using hash tables. When you are done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type `d = {'a': 1, 'b': 2}`, but everything looks so simple for the user. Python doesn't use the exact same implementation as the one you will work on today though. If you are curious about how it works under the hood, here is a good blog post about [how dictionaries are implemented in Python 2.7](http://www.laurentluce.com/posts/python-dictionary-implementation/) (not mandatory).

Note that all dictionaries are not implemented using hash tables, and there is a difference between a dictionary and a hash table. [Read more here](https://stackoverflow.com/questions/2061222/what-is-the-true-difference-between-a-dictionary-and-a-hash-table) (not mandatory).

## Tasks

### 0. &gt;&gt;&gt; ht = {}

Write a function that creates a hash table.

- Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
  - `size`: The size of the array
- Returns a pointer to the newly created hash table
- If something went wrong, your function should return `NULL`

### 1. djb2

Write a hash function implementing the djb2 algorithm.

- Prototype: `unsigned long int hash_djb2(const unsigned char *str);`
  - `str`: The string to hash
- You are allowed to copy and paste the function from [this page](http://www.cse.yorku.ca/~oz/hash.html) (not mandatory)

### 2. key -> index

Write a function that gives you the index of a key.

- Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
  - `key`: The key
  - `size`: The size of the array of the hash table
- This function should use the `hash_djb2` function that you wrote earlier
- Returns the index at which the key/value pair should be stored in the array of the hash table

### 3. &gt;&gt;&gt; ht['betty'] = 'holberton'

Write a function that adds an element to the hash table.

- Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
  - `ht`: The hash table you want to add or update the key/value to
  - `key`: The key. `key` can't be an empty string
  - `value`: The value associated with the key. `value` must be duplicated. `value` can be an empty string
- Returns `1` if it succeeded, `0` otherwise
- In case of collision, add the new node at the beginning of the list

### 4. &gt;&gt;&gt; ht['betty']

Write a function that retrieves a value associated with a key.

- Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`
  - `ht`: The hash table you want to look into
  - `key`: The key you are looking for
- Returns the value associated with the element, or `NULL` if `key` couldn't be found

### 5. &gt;&gt;&gt; print(ht)

Write a function that prints a hash table.

- Prototype: `void hash_table_print(const hash_table_t *ht);`
  - `ht`: The hash table
- You should print the key/value in the order that they appear in the array of the hash table
  - Order: array, list
- Format: see example
- If `ht` is `NULL`, don't print anything
>>>>>>> f8e19ce89efa648043527b9f824c5dce890f19c1
