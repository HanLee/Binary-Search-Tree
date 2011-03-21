/*
 * treeFunctions.c
 *
 *  Created on: Jan 9, 2010
 *      Author: han
 */

#include <stdio.h>
#include <stdlib.h>
#include "treeFunctions.h"

/*
 * Description: 		This recursive function inserts a bTreeNode into the tree.
 * 						As long as the item to be inserted into the tree is less than the root node, it will keep traversing the left leaf.
 * 						As long as the item to be inserted into the tree is more than the root node, it will keep traversing the right leaf.
 * 						It will traversing until it hits an empty pointer and make that the new left(which will be root for the next layer).
 * Input parameters: 	bTreeNode which is the root node that is used to keep track of the tree and the integer that is to be stored.
 * Returns: 			Returns the pointer where the new item is set.
 */
bTreeNode *insert(bTreeNode *nodePtr, int item)
{
	if(nodePtr == NULL)
		nodePtr = makeTreeNode(item);
	else if(item < nodePtr->content)
		nodePtr->left = insert(nodePtr->left, item);
	else if(item > nodePtr->content)
		nodePtr->right = insert(nodePtr->right, item);
	return nodePtr;
}

/*
 * Description:			This recursive function traverses through the whole tree and prints out the contents in pre order.
 * 						It will print the root, traverse to the left, print, until it hits a NULL, before traversing the right side and printing.
 * 						therefore, as long as a there are both left and right leaves, this algorithm will traverse left first, print, then right.
 * 						So the expected path of traversing from the example in main.c would be: 5 3 1 4 7 6 9
 * Input parameters:	The root of the tree.
 * Returns:				Nil.
 */
void printPreOrder(bTreeNode *nodePtr)
{
	if(nodePtr!=NULL)
	{
		printf("%d ", nodePtr->content);
		printPreOrder(nodePtr->left);
		printPreOrder(nodePtr->right);
	}
}

/*
 * Description:			This recursive function traverses through the whole tree and prints out the contents in in order.
 * 						It will traverse left all the way to the end of the tree, print, return back to the root, print, then traverse right.
 * 						So the expected result from the example in main.c would be: 1 3 4 5 6 7 9
 * Input parameters:	The root of the tree.
 * Returns:				Nil.
 */
void printInOrder(bTreeNode *nodePtr)
{
	if(nodePtr!=NULL)
	{
		printInOrder(nodePtr->left);
		printf("%d ", nodePtr->content);
		printInOrder(nodePtr->right);
	}
}

/*
 * Description:			This recursive function traverses through the whole tree and prints out the contents in post order.
 * 						It will traverse left all the way to the end of the tree, print, return back to the root, traverse right, print,
 * 						then traverse back to the root to print.
 * 						So the expected result from the example in main.c would be: 1 4 3 6 9 7 5
 * Input parameters:	The root of the tree.
 * Returns:				Nil.
 */
void printPostOrder(bTreeNode *nodePtr)
{
	if(nodePtr!=NULL)
	{
		printPostOrder(nodePtr->left);
		printPostOrder(nodePtr->right);
		printf("%d ", nodePtr->content);
	}
}

/*
 * Description:			This recursive function searches the Tree for a certain item in best log2(N)-1, and log2(N).
 * Input parameters:	Pointer to the root of the tree, and the item that we want to search for.
 * Returns:				Returns a pointer to the node that contains the item that we are searching for if it is in the list, if not returns NULL.
 */
bTreeNode *search(bTreeNode *nodePtr, int item)
{
	if(nodePtr != NULL)
	{
		if(item < nodePtr->content)
			nodePtr = search(nodePtr->left, item);
		else if(item > nodePtr->content)
			nodePtr = search(nodePtr->right, item);
	}
	return nodePtr;
}
