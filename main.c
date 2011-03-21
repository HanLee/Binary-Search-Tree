/*
 * main.c
 *
 *  Created on: Jan 9, 2010
 *      Author: han
 */

#include <stdio.h>
#include "treeNode.h"
#include "treeFunctions.h"

int main()
{
	/*
	 * Create a pointer that will be the root of the tree.
	 */
	bTreeNode *rootPtr = NULL;
	/*
	 * Insert a bunch of numbers for testing purposes.
	 * The tree constructed should look like:
	 *
	 *           5
	 *         /   \
	 *		  3	    7
	 *       / \   / \
	 *      1   4 6   9
	 */
	rootPtr = insert(rootPtr, 5);
	rootPtr = insert(rootPtr, 3);
	rootPtr = insert(rootPtr, 7);
	rootPtr = insert(rootPtr, 1);
	rootPtr = insert(rootPtr, 4);
	rootPtr = insert(rootPtr, 6);
	rootPtr = insert(rootPtr, 9);

	/*
	 * Traversing the tree in Preorder
	 */
	printf("\nPreOrder\n");
	printPreOrder(rootPtr);

	/*
	* Traversing the tree in Inorder
	*/
	printf("\nInOrder\n");
	printInOrder(rootPtr);

	/*
	* Traversing the tree in Postorder
	*/
	printf("\nPostOrder\n");
	printPostOrder(rootPtr);

	return 0;
}
