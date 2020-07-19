//
//  peoplemanagement.h
//  CPart
//
//  Created by Nemo on 2020/7/20.
//  Copyright © 2020 Yi. All rights reserved.
//

#ifndef peoplemanagement_h
#define peoplemanagement_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum IDType { name = 0, ID = 1 } IDType;

typedef struct People {
    const char *name;
    int ID;
} People;

typedef union PeopleWithPartInfo {
    const char *name;
    int ID;
} PeopleWithPartInfo;


/// Print a people object.
/// @param p The People object.
void printPeople(People const *p);

/// Turn `People` into `PeopleWithPartInfo`.
/// @param p The People object.
/// @param type If conserves the name one or the ID one.
PeopleWithPartInfo *peopleToPeopleWithPartInfo(People const *p, IDType type);

#endif /* peoplemanagement_h */
