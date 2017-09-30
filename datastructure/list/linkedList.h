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

static List MakeEmpty(List L); //置空
static int IsEmpty(List L); //判断是否为空
static int IsLast(Position P,List L);
static Position Find(ElementType X,List L);
static void Delete( ElementType X, List L );
static Position FindPrevious( ElementType X, List L );
static void Insert( ElementType X, List L, Position P );
static void DeleteList( List L );
static Position Header( List L );
static Position First( List L );
static Position Advance( Position P );
static ElementType Retrieve( Position P );
#endif
