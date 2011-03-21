/*
 * treeNode.h
 *
 *  Created on: Jan 9, 2010
 *      Author: han
 */

#ifndef TREENODE_H_
#define TREENODE_H_

typedef struct btreenode
{
	int content;
	struct bTreeNode *left;
	struct bTreeNode *right;
}bTreeNode;

bTreeNode *makeTreeNode(int item);

#endif /* TREENODE_H_ */
