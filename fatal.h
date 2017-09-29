//
// Created by lab211 on 2017/9/16.
//

#ifndef DATASTRUCTURE_FATAL_H_H
#define DATASTRUCTURE_FATAL_H_H
#include <stdio.h>
#include <stdlib.h>

#define Error( Str )        FatalError( Str )
#define FatalError( Str )   fprintf( stderr, "%s\n", Str ), exit( 1 )

#endif //DATASTRUCTURE_FATAL_H_H
