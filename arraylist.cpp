#include <iostream>
using namespace std;

template <typename T>
struct ArrayList
{
    T *data;
    int size;
};

template <typename T>
ArrayList<T> *create(int maxSize)
{
    ArrayList<T> *list = new ArrayList<T>;
    list->data = new T[maxSize];
    list->size = 0;
    return list;
}

template <typename T>
bool isEmpty(ArrayList<T> *list)
{
    return list->size == 0;
}

template <typename T>
bool insertItem(ArrayList<T> *list, T item, int tamMax)
{
    if (list->size >= tamMax)
    {
        return false;
    }
    list->data[list->size] = item;
    list->size++;
    return true;
}

template <typename T>
void printList(ArrayList<T> *list, void (*print)(T))
{
    for (int i = 0; i < list->size; i++)
    {
        print(list->data[i]);
    }
    cout << endl;
}

template <typename T>
int searchItem(ArrayList<T> *list, int val, bool (*compare)(T, int))
{
    for (int i = 0; i < list->size; i++)
    {
        if (compare(list->data[i], val))
        {
            return i;
        }
    }
    return -1;
}

template <typename T>
bool deleteItem(ArrayList<T> *list, int val, bool (*compare)(T, int))
{
    int first = searchItem(list, val, compare);
    if (first < 0)
    {
        return false;
    }
    list->size--;
    for (int i = first; i < list->size; i++)
    {
        list->data[i] = list->data[i + 1];
    }

    return true;
}
