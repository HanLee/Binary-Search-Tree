/*
 * treeNode.c
 *
 *  Created on: Jan 9, 2010
 *      Author: han
 */

#include "treeNode.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * Description: 		This function creates a bTreeNode as defined in treeNode.h
 * Input parameters:	An integer which is the item to be stored in the node.
 * Returns: 			A pointer to the newly created node of type bTreeNode.
 */
bTreeNode *makeTreeNode(int item)
{
	bTreeNode *newNodePtr = malloc(sizeof(bTreeNode));
	if(newNodePtr == NULL)
	{
		printf("error while creating tree node.");
		exit(1);
	}
	else
	{
		newNodePtr->content = item;
		newNodePtr->left = NULL;
		newNodePtr->right = NULL;
	}
	return newNodePtr;
}
