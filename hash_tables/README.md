## 3 - int hash_table_set(hash_table_t *ht, const char *key, const char \*value)

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
