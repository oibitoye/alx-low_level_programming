#ifndef _H_ASH_
#define _H_ASH_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct sh_node_s - Node of a sorted hash table
 * @key: The key
 * @val: The value of key
 * @next: Pointer to next node
 * @pprev: Pointer to previous element of linked list
 * @pnext: Pointer to next element of linked list
 */
typedef struct sh_node_s
{
	char *key;
	char *val;
	struct sh_node_s *next;
	struct sh_node_s *pprev;
	struct sh_node_s *pnext;
} sh_node_t;

/**
 * struct sh_table_s - Sorted hash table data structure
 * @size: Size of array
 * @array: Array of hash
 * @shead: Pointer to first element
 * @stail: Pointer to last element
 */
typedef struct sh_table_s
{
	unsigned long int size;
	sh_node_t **array;
	sh_node_t *shead;
	sh_node_t *stail;
} sh_table_t;

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

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
hash_node_t *add_n_hash(hash_node_t **, const char *, const char *);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
sh_table_t *sh_table_create(unsigned long int size);
sh_node_t *add_n_shash(sh_node_t **, const char *, const char *);
void add_i_shash(sh_table_t *ht, sh_node_t *new);
int sh_table_set(sh_table_t *ht, const char *key, const char *value);
char *sh_table_get(const sh_table_t *ht, const char *key);
void sh_table_print(const sh_table_t *ht);
void sh_table_print_rev(const sh_table_t *ht);
void sh_table_delete(sh_table_t *ht);

#endif
