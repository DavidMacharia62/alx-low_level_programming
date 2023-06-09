#include "hash_tables.h"

/**
 * hash_table_delete - This function deletes a hash table
 *
 * @ht: pointer to the hash table to delete
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmpA;
	hash_node_t *tmpB;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmpA = ht->array[i];
		while ((tmpB = tmpA) != NULL)
		{
			tmpA = tmpA->next;
			free(tmpB->key);
			free(tmpB->value);
			free(tmpB);
		}
	}
	free(ht->array);
	free(ht);
}
