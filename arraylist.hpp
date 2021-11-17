#ifndef ARRAYLIST_HPP
#define ARRAYLIST_HPP

template <typename T>
struct ArrayList;

template <typename T>
ArrayList<T> *create(int maxSize);

template <typename T>
bool isEmpty(ArrayList<T> *list);

template <typename T>
bool insertItem(ArrayList<T> *list, T item, int tamMax);

template <typename T>
void printList(ArrayList<T> *list, void (*print)(T));

template <typename T>
int searchItem(ArrayList<T> *list, int val, bool (*compare)(T, int));

template <typename T>
bool deleteItem(ArrayList<T> *list, int val, bool (*compare)(T, int));

#include "arraylist.cpp"
#endif