// ННГУ, ИИТММ, Курс "Алгоритмы и структуры данных"
//
// tqueue.h
//
// Copyright (c) Пинежанин Е.С.

#ifndef __TQueue_H__
#define __TQueue_H__

const int DefaultMemSize = 1024; // стандартный размер памяти для очереди

template<typename T>
class TQueue {
protected:
    T* pMem; // указатель на массив элементов
    size_t MemSize; // размер памяти для СД
    size_t DataCount; // количество элементов в СД
    size_t Head; // индекс начала очереди
    size_t Tail; // индекс конца очереди

    int GetNextIndex(int index) // получить следующий индекс
    {

    }

public:
    explicit TQueue(size_t Size = DefaultMemSize) : MemSize(Size), Head(0), Tail(0), DataCount(0)
    {

    }

    ~TQueue()
    {

    }

    size_t size() const
    {
        return size_t{};
    }

    bool IsEmpty() const
    {
        return false;
    }

    bool IsFull() const
    {
        return false;
    }

    void Push(const T& val)
    {

    }

    T Pop()
    {
        return T{}
    }
};

#endif
