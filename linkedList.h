//
// Created by lab211 on 2017/9/16.
//

#ifndef _LINKED_LIST
#define _LINKED_LIST

struct Node;
typedef struct Node* PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
typedef int ElementType;

List MakeEmpty(List L); //置空
int IsEmpty(List L); //判断是否为空
int IsLast(Position P,List L);
Position Find(ElementType X,List L);
void Delete( ElementType X, List L );
Position FindPrevious( ElementType X, List L );
void Insert( ElementType X, List L, Position P );
void DeleteList( List L );
Position Header( List L );
Position First( List L );
Position Advance( Position P );
ElementType Retrieve( Position P );
#endif
