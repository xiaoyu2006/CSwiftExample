//
//  peoplemanagement.c
//  CPart
//
//  Created by Nemo on 2020/7/20.
//  Copyright © 2020 Yi. All rights reserved.
//

#include "peoplemanagement.h"

void printPeople(People const *p)
{
    printf("People with name=%s, id=%d.\n", p->name, p->ID);
}

PeopleWithPartInfo *peopleToPeopleWithPartInfo(People const *p, IDType type)
{
    PeopleWithPartInfo *ret = (PeopleWithPartInfo*) malloc( sizeof(PeopleWithPartInfo) );
    if (type == name) {
        char *newStr = (char*) malloc( sizeof(char) * strlen(p->name) );
        strcpy(newStr, p->name);
        ret->name = newStr;
    } else {
        ret->ID = p->ID;
    }
    return ret;
}

