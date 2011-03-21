/*
 * treeFunctions.c
 *
 *  Created on: Jan 9, 2010
 *      Author: han
 */

#include "treeNode.h"

bTreeNode *insert(bTreeNode *nodePtr, int item);
void printPreOrder(bTreeNode *nodePtr);
void printInOrder(bTreeNode *nodePtr);
void printPostOrder(bTreeNode *nodePtr);
bTreeNode *search(bTreeNode *nodePtr, int item);
