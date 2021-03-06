# Упражнение върху предефиниране на оператори: `class Rational`

* **(5 точки)** Да се дефинира клас `Rational`, който да моделира рационални числа
  (целочислени дроби). Класът трябва да притежава две скрити член-променливи
  `num_` и `den_` от тип `long`, които да съответстват на числителя и знаменателя
  на рационалното число.

* **(5 точки)** Да се дефинират две публични константни член-функции `get_numerator()`
  и `get_denominator()`, които да връщат стойностите на съответно числителя и знаменателя.

* **(20 точки)** При всички операции рационалното число да поддържа в нормална форма.

* **(10 точки)** Да се дефинират член-функциите
  ```cpp
  Rational& add(const Rational& r);
  Rational& sub(const Rational& r);
  ```
  Функциите трябва да реализира събиране и изваждане на рационални числа.

* **(5 точки)** Да се предефинира операторът `+=` като член-функция на класа
  `Rational` със сигнатура:
  ```cpp
  Rational& operator+=(const Rational& r);
  ```
  Операторът трябва да реализира събиране на рационални числа.

* **(5 точки)** Да се предефинира операторът `-=` като член-функция на класа
  `Rational` със сигнатура:
  ```cpp
  Rational& operator-=(const Rational& r);
  ```
  Операторът трябва да реализира изваждане рационални числа.

* **(10 точки)** Да се дефинират член-функциите
  ```cpp
  Rational& mul(const Rational& r);
  Rational& div(const Rational& r);
  ```
  Функциите трябва да реализира умножение и делене на рационални числа.

* **(5 точки)** Да се предефинира операторът `*=` като член-функция на класа
  `Rational` със сигнатура:
  ```cpp
  Rational& operator*=(const Rational& r);
  ```
  Операторът трябва да реализира умножение на рационални числа.

* **(5 точки)** Да се предефинира операторът `/=` като член-функция на класа
  `Rational` със сигнатура:
  ```cpp
  Rational& operator/=(const Rational& r);
  ```
  Операторът трябва да реализира делене на рационални числа.

* **(5 точки)** Да се предефинира операторът + като функция извън класа
  `Rational` със сигнатура:
  ```cpp
  Rational operator+(const Rational& r1, const Rational& r2);
  ```
  Операторът трябва да реализира събиране на рационални числа.

* **(5 точки)** Да се предефинира операторът `-` като функция извън класа
  `Rational` със сигнатура:
  ```cpp
  Rational operator-(const Rational& r1, const Rational& r2);
  ```
  Операторът трябва да реализира изваждане на рационални числа.

* **(5 точки)** Да се предефинира операторът `*` като функция извън класа
  `Rational` със сигнатура:
  ```cpp
  Rational operator*(const Rational& r1, const Rational& r2);
  ```
  Операторът трябва да реализира умножение на рационални числа.

* **(5 точки)** Да се предефинира операторът `/` като функция извън класа
  `Rational` със сигнатура:
  ```cpp
  Rational operator/(const Rational& r1, const Rational& r2);
  ```
  Операторът трябва да реализира делене на рационални числа.

* **(10 точки)** Да се предефинира операторът за изход в поток `<<` като функция
  извън класа `Rational` със сигнатура:
  ```cpp
  ostream& operator<<(ostream& out, const Rational& r);
  ```
  Операторът трябва да реализира извеждане на рационално число в
  изходния поток във формата `(x/y)`, където x и y са числителя и
  знаменателя на числото.

* **(10 точки)** Да се предефинира операторът за вход от поток `>>` като функция
  извън класа `Rational` със сигнатура:
  ```cpp
  istream& operator>>(istream& in, Rational& r);
  ```
  Операторът трябва да реализира прочитане на рационално число от
  входния поток във формата `(x/y)`, където x и y са числителя и
  знаменателя на числото. Операторът трябва да се грижи и за установяването
  на `bad` бит, когато опитът да се прочете числото е неуспешен.
