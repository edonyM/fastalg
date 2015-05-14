 /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 #        .---.         .-----------
 #       /     \  __  /    ------
 #      / /     \(  )/    -----   (`-')  _ _(`-')              <-. (`-')_
 #     //////    '\/ `   ---      ( OO).-/( (OO ).->     .->      \( OO) )     .->
 #    //// / //  :   : ---      (,------. \    .'_ (`-')----. ,--./ ,--/  ,--.'  ,-.
 #   // /   /  / `\/ '--         |  .---' '`'-..__)( OO).-. ' |   \ |  | (`-')'.'  /
 #  //          //..\\          (|  '--.  |  |  ' |( _) | | | |  . '|  |)(OO \    /
 # ============UU====UU====      |  .--'  |  |  / : \|  |)| | |  |\    |  |  /   /)
 #             '//||\\`          |  `---. |  '-'  /  '  '-' ' |  | \   |  `-/   /`
 #               ''``            `------' `------'    `-----' `--'  `--'    `--'
 # ######################################################################################
 #
 # Author: edony - edonyzpc@gmail.com
 #
 # twitter : @edonyzpc
 #
 # Last modified: 2015-05-14 15:15
 #
 # Filename: doublelist.h
 #
 # Description: All Rights Are Reserved
 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#ifndef _DOUBLELIST_H
#define _DOUBLELIST_H

typedef struct DListElemt_ {
    void *data;
    DListElemt *prev;
    DListElemt *next;
}DListElemt;

typedef struct DList_ {
    DListElemt *head;
    DListElemt *tail;
    int size;
    void (*destroy)(void *data);
    int (*match)(const void *key, const void *data);
}DList;

void dlist_init(DList *list, void (*destroy)(void *data));

void dlist_destroy(DList *list);

int dlist_ins_next(DList *list, DListElemt *element, const void *data);

int dlist_ins_prev(DList *list, DListElemt *element, const void *data);

int dlist_remove(DList *list, DListElemt *element, void **data);

int dlist_size(const DList *list);

DListElemt *dlist_head(const DList *list);

DListElemt *dlist_tail(const DList *list);

int dlist_is_head(const DListElemt *element);

int dlist_is_tail(const DListElemt *element);

void *dlist_data(const DListElemt *element);

DListElemt *dlist_next(const DListElemt *element);

DListElemt *dlist_prev(const DListElemt *element);
#endif
