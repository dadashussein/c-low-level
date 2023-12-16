## 3 - `int hash_table_set(hash_table_t *ht, const char *key, const char \*value)`

**1. Node Creation:**
- The `create_node` function allocates memory for a new node structure, duplicates the provided key and value strings using `strdup`, and sets the `next` pointer to `NULL`. This function ensures proper memory management and independent copies of the key and value data.

**2. Adding Key-Value Pairs:**
- The `hash_table_set` function performs the main task of inserting or updating key-value pairs in the hash table. It:
  - Checks for null arguments (hash table, key, or value) and returns an error if any are missing.
  - Calculates a hash index for the key using the `key_index` function. This helps identify the bucket where the key should be stored.
  - Accesses the linked list at the calculated index in the hash table array.
  - Iterates through the existing nodes in the list, comparing their keys with the provided key using `strcmp`.
  - If an existing node with the same key is found:
    - The old value is freed using `free` to prevent memory leaks.
    - The new value is assigned to the existing node using `strdup` to create an independent copy.
    - If memory allocation for the new value fails, the function returns an error.
    - Otherwise, the function successfully updates the existing key-value pair and returns 1.
  - If no existing node with the same key is found:
    - A new node is created using the `create_node` function.
    - The new node's `next` pointer is set to the current head of the linked list at the calculated index.
    - The head pointer of the list in the hash table array is updated to point to the newly created node.
    - This effectively adds the new key-value pair to the hash table, and the function returns 1.

**3. Key Lookup and Memory Management:**
- The code carefully handles memory allocation and deallocation throughout the process.
  - Memory is allocated for the new node and its key and value strings using `malloc`.
  - Memory is freed for the old value and the node itself if necessary using `free`.
  - Early returns and error handling ensure proper resource management in case of failures.

**4. Performance Considerations:**
- Using a hashing function distributes keys evenly across the buckets, reducing the likelihood of collisions and improving search performance.
- Separate chaining within each bucket allows for efficient insertion and deletion of key-value pairs without affecting other elements in the list.
- The size of the hash table array impacts performance and collision frequency. A larger array reduces collisions but increases memory usage.
-----------------------------------------------
## 4 - `char *hash_table_get(const hash_table_t *ht, const char *key)`

This code defines the `hash_table_get` function, which retrieves the value associated with a specific key from a hash table. Here's a breakdown:

**1. Argument Check and Initialization:**
- The function takes two arguments:
    - `ht`: Pointer to the hash table structure.
    - `key`: Pointer to the key string you want to find.
- It first checks if either argument is null and returns null if so.

**2. Hash Index Calculation:**
- It calls the `key_index` function (assumed to be defined elsewhere) with the key string and the hash table size to calculate the index in the hash table array where the key should be located.

**3. Linked List Traversal:**
- It assigns the first node in the linked list at the calculated index to `current`.
- It enters a loop that continues as long as `current` is not null and the key comparison fails:
    - Inside the loop, it compares the current node's key (`current->key`) with the provided key (`key`) using `strcmp`.
    - If they match, the loop exits.
    - Otherwise, it moves to the next node in the list by assigning `current->next` to `current`.

**4. Value Retrieval and Return:**
- After the loop:
    - If `current` is null, it means the key was not found in the hash table, and the function returns null.
    - Otherwise, the value associated with the key is stored in `current->value`.
    - The function returns `current->value` as a pointer to the value string.

-------------------------------------------------------------------------
## 5 -  `hash_table_print` 

**1. Initialization and checks:**
* It takes a `ht` pointer to the hash table structure as input.
* It initializes variables:
    * `i` for iterating through the hash table array.
    * `current` for traversing the linked list within each bucket.
    * `flag` to track whether any key-value pair has been printed already.
* It checks for a null hash table and returns if that's the case.

**2. Printing the opening brace:**
* It prints an opening curly brace ("{") to indicate the start of the hash table representation.

**3. Looping through the hash table array:**
* It uses a loop to iterate through each element (bucket) in the hash table array (`ht->size` times).
* For each bucket:
    * It assigns the first node in the linked list (if any) to `current`.
    * It enters a nested loop that continues as long as `current` is not null:
        * Inside the nested loop:
            * It checks the `flag` variable:
                * If `flag` is 1 (meaning at least one key-value pair has been printed previously), it prints a comma and space (", ").
                * This ensures proper separation between key-value pairs within the same bucket.
            * It prints the key and value of the current node using `printf`:
                * The key and value are enclosed in single quotes (' ').
                * They are formatted with colon ("': '") separator.
            * It sets `flag` to 1 to indicate that a key-value pair has been printed.
            * It advances to the next node in the linked list by assigning `current->next` to `current`.

**4. Printing the closing brace:**
* After iterating through all buckets and their linked lists, it prints a closing curly brace ("}") to signify the end of the hash table representation.
* It then adds a newline character ("\n") for formatting.

----------------
## 6 -  `hash_table_delete` 
**1. Null check and initialization:**

* It first checks if the provided `ht` pointer is NULL and returns if so, avoiding accessing invalid memory.
* It initializes two variables:
    * `i` to iterate through the hash table array.
    * `current` to traverse the linked list within each bucket.
    * `next` to temporarily store the next node for safe iteration.

**2. Looping through the hash table array:**

* It iterates through each element (bucket) in the hash table array using a loop with `ht->size` as the limit.
* For each bucket:
    * It assigns the first node in the linked list (if any) to `current`.

**3. Freeing nodes within each bucket:**

* It enters a nested loop that continues as long as `current` is not null.
* Inside the nested loop:
    * It saves the next node in the list using `current->next` and assigns it to `next`. This allows safe iteration without losing track of the next node.
    * It frees the memory allocated for the current node's key and value using `free(current->key)` and `free(current->value)`.
    * Finally, it frees the memory allocated for the entire current node itself using `free(current)`.
    * It updates `current` to point to the next node saved in `next` to continue iterating through the list.

**4. Freeing remaining memory:**

* After iterating through all buckets and emptying their linked lists, it frees the memory allocated for the hash table array itself using `free(ht->array)`.
* Finally, it frees the memory allocated for the entire hash table structure using `free(ht)`.
