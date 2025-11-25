// ННГУ, ИИТММ, Курс "Алгоритмы и структуры данных"
//
// Copyright (c) Пинежанин Е.С.
//
// Тестирование модели вычислительного центра

#include <iostream>

#include "tcomputecentermodel.h"

int main()
{
  size_t CountCycles = 1000;
  size_t QueueSize = 16;
  double q1 = 0.3;
  double q2 = 0.25;

  TComputeCenterModel model(CountCycles = 100, QueueSize, q1, q2);
  model.Model();

  setlocale(LC_ALL, "Russian");

  model.PrintResult();

  return 0;
}
